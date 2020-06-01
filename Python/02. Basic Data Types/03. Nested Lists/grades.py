from operator import itemgetter

n = int(input())
students = sorted([[input(), float(input())] for i in range(n)], key=itemgetter(1))
lowest = min(students, key = lambda grade: grade[1])
second_low = min(filter(lambda grade: grade[1] != lowest[1], students), key = lambda grade: grade[1])

names = list(filter(lambda grade: grade[1] == second_low[1], students))
names.sort(key = lambda grade: grade[0])

for name in names:
    print(name[0])