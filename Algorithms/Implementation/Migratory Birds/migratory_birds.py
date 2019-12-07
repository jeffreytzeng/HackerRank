import math
import os
import random
import re
import sys

# Complete the migratoryBirds function below.
def migratoryBirds(arr):
	arr.sort()
	repeat = [0, 0, 0, 0, 0]

	for spot in arr:
		repeat[spot-1] += 1

	max = repeat[0]
	most = 1

	for index in range(1, len(repeat)):
		if repeat[index] > max:
			max = repeat[index]
			most = index + 1

	return most


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    arr_count = int(input().strip())

    arr = list(map(int, input().rstrip().split()))

    result = migratoryBirds(arr)

    fptr.write(str(result) + '\n')

    fptr.close()
