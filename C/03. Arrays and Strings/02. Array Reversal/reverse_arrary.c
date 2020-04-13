#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num = 0, *arr;
	scanf("%d", &num);
	arr = (int*)malloc(num * sizeof(int));
	for (int i = 0; i < num; i++) {
		scanf("%d", arr + i);
	}

	for (int i = 0; i < num / 2; i++) {
		int temp = arr[i];
		arr[i] = arr[num - i - 1];
		arr[num - i - 1] = temp;
	}

	for (int i = 0; i < num; i++) {
		i == num - 1 ? printf("%d", arr[i]) : printf("%d ", arr[i]);
	}

	free(arr);

	return 0;
}