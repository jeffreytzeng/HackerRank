import math

def utopianTree(n):
    """ 
    Inspired by asbear's O(1) algo
          year       n-cycle          height
        (2^0 - 1)       0       2*0+1 = 1
        (2^1 - 1)       1       2*1   = 2
        (2^1 - 1)       2       2*1+1 = 3
        (2^2 - 1)       3       2*3   = 6
        (2^2 - 1)       4       2*3+1 = 7
        (2^3 - 1)       5       2*7   = 14
        (2^3 - 1)       6       2*7+1 = 15
    """
	return 2*((1 << (math.floor(n/2) + n%2)) - 1) - (n%2 - 1)


t = int(input())
for n in range(t):
    print(utopianTree(int(input())))