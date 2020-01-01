back_date = list(map(int, input().split()))
dead_line = list(map(int, input().split()))

return_date = dict()
return_date["year"] = back_date[2]
return_date["month"] = back_date[1]
return_date["day"] = back_date[0]

due_date = dict()
due_date["year"] = dead_line[2]
due_date["month"] = dead_line[1]
due_date["day"] = dead_line[0]

fine = 0

if return_date["year"] > due_date["year"]:
    fine += 10000
elif return_date["year"] == due_date["year"]:
    if return_date["month"] > due_date["month"]:
        fine += (return_date["month"] - due_date["month"]) * 500
    elif return_date["month"] == due_date["month"]:
        if return_date["day"] > due_date["day"]:
            fine += (return_date["day"] - due_date["day"]) * 15

print(fine)