n = int(input())

ar = list(map(int, input().split()))

colors = set()
pairs = 0

for c in ar:
    if c in colors:
        pairs += 1
        colors.remove(c)
    else:
        colors.add(c)

print(pairs)