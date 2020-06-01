n = int(input())
marks = dict()

for student in range(n):
    name, *scores = input().split()
    marks[name] = sum(list(map(float, scores))) / len(scores)

print("{:.2f}".format(marks[input()]))