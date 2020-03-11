def kaprekarNumbers(p, q):
	kaprekar_numbers = list()

	for k in range(p, q + 1):
		d = len(str(k))
		square = str(pow(k, 2))
		l = int(square[: len(square) - d]) if len(square) > d else 0
		r = int(square[len(square) - d :])

		if l + r == k:
			kaprekar_numbers.append(k)

	return kaprekar_numbers


p = int(input())
q = int(input())
kaprekar_numbers = kaprekarNumbers(p, q)

if (len(kaprekar_numbers) > 0):
	for k in kaprekar_numbers:
		print(str(k) if k == kaprekar_numbers[-1] else str(k) + ' ', end='')
else:
	print("INVALID RANGE")