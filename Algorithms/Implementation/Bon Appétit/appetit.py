n, k = input().split()
bill = list(map(int, input().split()))
b = int(input())

bill[int(k)] = 0
sum = sum(bill)

print("Bon Appetit" if b == sum / 2 else int(b - sum / 2))