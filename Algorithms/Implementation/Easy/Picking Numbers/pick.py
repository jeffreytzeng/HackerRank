def pickingNumbers(a):
	a.sort()

	max = 0
	start = 0
	check = a[0]

	for i in range(1, len(a)):
		if abs(check - a[i]) > 1:
			check = a[i]

			if i - start > max:
				max = i - start

			start = i
		elif i == len(a) - 1:
			if i - start + 1 > max:
				max = i - start + 1
	
	return max

n = int(input())
a = list(map(int, input().split()))
print(pickingNumbers(a))