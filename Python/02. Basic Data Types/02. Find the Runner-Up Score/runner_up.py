n = int(input())
arr = list(map(int, input().split()))

print(max(filter(lambda x: x < max(arr), arr)))