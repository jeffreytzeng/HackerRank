n = int(input())
p = int(input())
turns = 0

if p > n / 2:
    turns = int((n - p) / 2) if n % 2 else int(n / 2) - int(p / 2)
else:
    turns = int(p / 2)

print(turns)