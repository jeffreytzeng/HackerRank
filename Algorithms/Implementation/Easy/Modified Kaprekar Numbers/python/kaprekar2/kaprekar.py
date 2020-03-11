class KaprekarNumbers():
    def __init__(self, limits):
        self.__limits = limits
        self.__kaprekar_numbers = list()

    def __FindNumbers(self):
        for i in range(self.__limits[0], self.__limits[1] + 1):
            d = len(str(i))
            square = str(pow(i, 2))
            l = int(square[: len(square) - d]) if len(square) > d else 0
            r = int(square[len(square) - d:])

            if l + r == i:
                self.__kaprekar_numbers.append(i)

    def ShowNumbers(self):
        self.__FindNumbers()

        if len(self.__kaprekar_numbers) > 0:
            for k in self.__kaprekar_numbers:
                print(str(k) if k == self.__kaprekar_numbers[-1] else str(k) + ' ', end='')
        else:
            print("INVALID RANGE")