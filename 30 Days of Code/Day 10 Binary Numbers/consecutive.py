ones = "{:b}".format(int(input())).split('0')
one_length = list(map(len, ones))
print(max(one_length))