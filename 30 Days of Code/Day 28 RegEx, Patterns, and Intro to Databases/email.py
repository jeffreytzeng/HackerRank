import re

names = int(input())
gmails = list()

for name in range(names):
    email = input()

    if re.search("@gmail.com", email):
        gmails.append(email.split()[0])

gmails.sort()

for mail in gmails:
    print(mail)