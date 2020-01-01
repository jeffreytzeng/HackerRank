import math

n = int(input())
numbers = list()
primes = []

for i in range(n):
	numbers.append(int(input()))
	primes.append("Prime")

for i in range(n):
	if numbers[i] == 1:
		primes[i] = "Not prime"
	elif numbers[i] > 3:
		for root in range(2, int(math.sqrt(numbers[i]))+1):
			if (numbers[i] % root == 0):
				primes[i] = "Not prime"
				break;

for prime in primes:
	print(prime)