import matplotlib.pyplot as plt


def generate_graph(df):

    subjects = df["Subject"]
    percentages = []

    for _, row in df.iterrows():

        total = row["Present"] + row["Absent"]

        if total == 0:
            percentages.append(0)
        else:
            percentages.append((row["Present"]/total)*100)

    plt.figure()

    plt.bar(subjects, percentages)

    plt.xticks(rotation=45)
    plt.ylabel("Attendance %")
    plt.title("Attendance Report")

    plt.tight_layout()

    plt.savefig("graph.png")
    plt.close()

    return "graph.png"