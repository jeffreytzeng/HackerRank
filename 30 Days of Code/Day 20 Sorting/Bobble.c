#include <stdio.h>

int BobbleSort(int *arr, int size);

int main()
{
	int n = 0;
	scanf("%d", &n);

	int array[n];

	for (int i = 0; i < n; i++) {
		scanf("%d", &array[i]);
	}

	int swap = BobbleSort(array, n);

	printf("Array is sorted in %d swaps.\n", swap);
	printf("First Element: %d\n", array[0]);
	printf("Last Element: %d\n", array[n-1]);
	return 0;
}

int BobbleSort(int *arr, int size) {
	int swap = 0;
	while (size-->1) {
		for (int i = 0; i < size; i++) {
			if (arr[i] > arr[i+1]) {
				int temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
				swap++;
			}
		}
	}
	return swap;
}