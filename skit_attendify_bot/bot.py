from telegram import Update, InlineKeyboardButton, InlineKeyboardMarkup
from telegram.ext import ApplicationBuilder, CommandHandler, MessageHandler, CallbackQueryHandler, ContextTypes, filters

from parser import parse_text, parse_excel, parse_csv
from logic import calculate_subject_stats, overall_stats
from graph import generate_graph

TOKEN = "8621175302:AAGXffx2PP7YkbkKbngvn6mVm5hBWR3cl9E"
user_data = {}


async def start(update: Update, context: ContextTypes.DEFAULT_TYPE):

    keyboard = [
        [InlineKeyboardButton("📋 Paste ERP", callback_data="paste")],
        [InlineKeyboardButton("📊 Upload Excel", callback_data="excel")],
        [InlineKeyboardButton("📄 Upload CSV", callback_data="csv")]
    ]

    reply_markup = InlineKeyboardMarkup(keyboard)

    await update.message.reply_text(
        "Select input method:",
        reply_markup=reply_markup
    )


async def button(update: Update, context: ContextTypes.DEFAULT_TYPE):

    query = update.callback_query
    await query.answer()

    await query.message.reply_text("Send your data now")


async def handle_doc(update: Update, context: ContextTypes.DEFAULT_TYPE):

    file = await update.message.document.get_file()
    name = update.message.document.file_name

    await file.download_to_drive(name)

    if name.endswith(".xlsx"):
        df = parse_excel(name)

    elif name.endswith(".csv"):
        df = parse_csv(name)

    else:
        await update.message.reply_text("Invalid file")
        return

    user_data[update.message.chat_id] = df

    await update.message.reply_text("Enter required attendance %")


async def handle_text(update: Update, context: ContextTypes.DEFAULT_TYPE):

    text = update.message.text
    chat = update.message.chat_id

    # If user already uploaded data → treat text as percentage
    if chat in user_data:

        try:

            required = float(text)

            df = user_data[chat]

            present, total, percent = overall_stats(df)

            subjects = calculate_subject_stats(df, required)

            msg = f"📊 Overall: {percent:.2f}%\n\n"

            for s in subjects:
                msg += f"{s['subject']} → {s['percentage']}% ({s['status']})\n"

            await update.message.reply_text(msg)

            graph = generate_graph(df)

            await update.message.reply_photo(photo=open(graph,'rb'))

            del user_data[chat]

        except:
            await update.message.reply_text("Enter valid %")

    else:

        df = parse_text(text)

        if df.empty:
            await update.message.reply_text("Could not read data")
            return

        user_data[chat] = df

        present, total, percent = overall_stats(df)

        await update.message.reply_text(
            f"Detected Attendance: {percent:.2f}%\n\nEnter required %"
        )


app = ApplicationBuilder().token(TOKEN).build()

app.add_handler(CommandHandler("start", start))
app.add_handler(CallbackQueryHandler(button))
app.add_handler(MessageHandler(filters.Document.ALL, handle_doc))
app.add_handler(MessageHandler(filters.TEXT & ~filters.COMMAND, handle_text))

print("🚀 PRO BOT RUNNING...")

app.run_polling()