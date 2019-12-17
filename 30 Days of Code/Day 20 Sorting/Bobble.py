class BobbleSort():
    def __init__(self, arr):
        self.arr = arr

    def Sort(self):
        unsort = len(self.arr)
        swap_times = 0

        for item in reversed(range(unsort)):
            for i in range(item):
                if self.arr[i] > self.arr[i+1]:
                    temp = self.arr[i]
                    self.arr[i] = self.arr[i+1]
                    self.arr[i+1] = temp
                    swap_times += 1

        return swap_times

n = int(input())
array = list(map(int, input().split()))

bobble = BobbleSort(array)
swap = bobble.Sort()

print("Array is sorted in " + str(swap) + " swaps.")
print('First Element: ' + str(array[0]))
print('Last Element: ' + str(array[-1]))