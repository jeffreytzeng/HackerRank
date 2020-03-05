import math

def findDigits(n):
	count = 0
	origin = n

	while n != 0:
		divisor = n % 10

		if divisor != 0:
			count += 0 if origin % divisor else 1

		n = math.floor(n / 10)

	return count


t = int(input())
for i in range(t):
	print(findDigits(int(input())))