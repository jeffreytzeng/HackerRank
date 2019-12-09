class Kaprekar():
    def __init__(self, p, q):
        self.__kaprekar = list()
        self.__KaprekarNumbers(p, q)

    def __Digits(self, number):
        count = 0

        while number != 0:
            number = int(number / 10)
            count += 1
            
        return count

    def __KaprekarNumbers(self, p, q):
        for i in range(p, q+1):
            right_size = self.__Digits(i)
            square = int(pow(i, 2))
            left_size = self.__Digits(square) - right_size
            square = str(square)
#            print('i=' + str(i) + ", square=" + square + ", left_size=" + str(left_size) + ", right_size=" + str(right_size))
            left = 0

            if left_size > 0:
                left = int(square[:left_size])

            right = int(square[left_size:])
            sum = left + right
#            print('left=' + str(left) + ", right=" + str(right) + ", sum=" + str(sum))

            if sum == i:
                self.__kaprekar.append(i)

    def Show(self):
        if len(self.__kaprekar) == 0:
            print("INVALID RANGE")
        else:
            for i in range(len(self.__kaprekar)):
                print(str(self.__kaprekar[i])
                    if i == len(self.__kaprekar)-1
                    else str(self.__kaprekar[i]) + " ", end='')