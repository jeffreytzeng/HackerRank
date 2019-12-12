class Student(Person):
    def __init__(self, first, last, idNum, scores):
        super().__init__(first, last, idNum)
        self.scores = scores[:]

    def calculate(self):
        total = sum(self.scores)
        average = total/len(self.scores)
        if average > 100:
            print("Score cannot over 100!")
        elif 90 <= average:
            return "O"
        elif 80 <= average:
            return "E"
        elif 70 <= average:
            return "A"
        elif 55 <= average:
            return "P"
        elif 40 <= average:
            return "D"
        else:
            return "T"
