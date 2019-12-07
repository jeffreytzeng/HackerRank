#include <stdio.h>

void printArr(int *arr, int size);
void Sort(int *arr, int size);

int main()
{
    int n = 0;
    scanf("%d", &n);
    int numbers[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    Sort(numbers, n);

    return 0;
}

void printArr(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        i == size-1 ? printf("%d", arr[i]) : printf("%d ", arr[i]);
    }
}

void Sort(int *arr, int size) {
    for (int i = size-1; i >= 0; i--) {
        int key = arr[i];
        int j = i-1;

        while (j >= 0 && key <= arr[j]) {
            arr[j+1] = arr[j];
            j--;
            printArr(arr, size);
            printf("\n");
        }
        arr[j+1] = key;
    }
    printArr(arr, size);
}