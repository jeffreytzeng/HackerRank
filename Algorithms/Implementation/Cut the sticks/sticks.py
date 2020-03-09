def cutTheSticks(arr):
	arr.sort()
	result = [len(arr)]

	for i in range(len(arr) - 1):
		if arr[i] != arr[i + 1]:
			result.append(len(arr) - (i + 1))

	return result


n = int(input())
arr = list(map(int, input().split()))
result = cutTheSticks(arr)
for i in result:
	print(i)