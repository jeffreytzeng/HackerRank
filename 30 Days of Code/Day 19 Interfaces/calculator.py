from abc import ABC, abstractmethod

class AdvancedArithmatic(ABC):
    @abstractmethod
    def divisorSum(self, n):
        pass


class Calculator(AdvancedArithmatic):
    def divisorSum(self, n):
        sum = 0
        for i in range(1, n+1):
            if (n % i == 0):
                sum += i
        return sum

n = int(input())
my_calculator = Calculator()
s = my_calculator.divisorSum(n)
print("I implemented: " + type(my_calculator).__bases__[0].__name__)
print(s)