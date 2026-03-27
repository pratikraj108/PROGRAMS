def calculate_subject_stats(df, required):

    result = []

    for _, row in df.iterrows():

        subject = row["Subject"]
        present = int(row["Present"])
        absent = int(row["Absent"])

        total = present + absent

        if total == 0:
            percentage = 0
        else:
            percentage = (present / total) * 100

        # Bunk calculation
        bunk = int((100 * present / required) - total)

        if bunk >= 0:
            status = f"Can miss {bunk}"
        else:
            status = f"Attend {-bunk} classes"

        result.append({
            "subject": subject,
            "percentage": round(percentage,2),
            "status": status
        })

    return result


def overall_stats(df):

    present = df["Present"].sum()
    absent = df["Absent"].sum()

    total = present + absent

    percentage = (present / total) * 100

    return present, total, percentage