def is_leap(year):
	if year % 4 == 0:
		if year % 100:
			return True
		elif year % 400 == 0:
			return True

	return False


year = int(input())
print(is_leap(year))