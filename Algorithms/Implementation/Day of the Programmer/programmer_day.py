def FindDate(feb_days, year):
	month_days = [31, feb_days, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
	total_days = 0

	for i in range(12):
		total_days += month_days[i]

		if total_days > 256:
			total_days -= month_days[i]
			extra_days = 256 - total_days
			print("{:02d}.{:02d}.{}".format(extra_days, i+1, year))
			break


def ProgrammerDay(year):
	days_in_feb = 28

	if year == 1918:
		days_in_feb = 15
	else:
		leap_year = False

		if year < 1918:
			leap_year = (year % 4 == 0)
		else:
			leap_year = (year % 400 == 0) or ((year % 4 == 0) and (year % 100 != 0))

		if leap_year:
			days_in_feb = 29

	FindDate(days_in_feb, year)


ProgrammerDay(int(input()))