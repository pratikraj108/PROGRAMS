import pandas as pd


def parse_text(text):

    rows = text.split("\n")
    data = []

    for r in rows:

        parts = r.split()

        if len(parts) >= 6:

            try:
                subject = " ".join(parts[1:-5])
                present = int(parts[-5])
                absent = int(parts[-2])

                data.append({
                    "Subject": subject,
                    "Present": present,
                    "Absent": absent
                })

            except:
                pass

    return pd.DataFrame(data)


def parse_excel(file):
    return pd.read_excel(file)


def parse_csv(file):
    return pd.read_csv(file)