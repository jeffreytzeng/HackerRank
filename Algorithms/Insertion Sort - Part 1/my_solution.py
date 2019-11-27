def PrintArray(arr):
    """Printing each array elements."""
    for i in range(len(arr)):
        print(str(arr[i]) + ' ' if i != len(arr)-1 else str(arr[i]), end='')


def Sort(arr):
    """Sorting array by ascending."""
    for i in reversed(range(len(arr))):
        key = arr[i]
        j = i-1
        
        while (j >= 0 and key <= arr[j]):
            arr[j+1] = arr[j]
            j -= 1
            PrintArray(arr)
            print('')

        arr[j+1] = key

    PrintArray(arr)


n = int(input())
numbers = list(map(int, input().split()))
Sort(numbers)