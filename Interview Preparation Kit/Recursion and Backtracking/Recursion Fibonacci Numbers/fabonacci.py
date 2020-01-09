def Fabonacci(x):
    if x < 2:
        return 1 if x > 0 else 0
    else:
        return Fabonacci(x - 1) + Fabonacci(x - 2)


n = int(input())
print(Fabonacci(n))