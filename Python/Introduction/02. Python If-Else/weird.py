n = int(input())

if n % 2:
	print("Weird")
else:
	print("Weird" if n >= 6 and n <= 20 else "Not Weird")