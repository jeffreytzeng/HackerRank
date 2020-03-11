#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
	return *(int*)a - *(int*)b;
}

int *cutTheSticks(int arr_count, int *arr, int *result_count) {
	qsort(arr, arr_count, sizeof(int), compare);

	*result_count = 1;
	int *result = (int*)malloc(*result_count * sizeof(int));
	result[0] = arr_count;

	for (int i = 0; i < arr_count - 1; i++) {
		if (arr[i] != arr[i + 1]) {
			int *temp = (int*)malloc((*result_count + 1) * sizeof(int));

			for (int j = 0; j < *result_count; j++) {
				temp[j] = result[j];
			}
			temp[(*result_count)++] = arr_count - (i + 1);
			free(result);
			result = temp;
		}
	}

	return result;
}

int main()
{
	int n = 0;
	scanf("%d", &n);

	int arr[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	int result_count = 0;
	int *result = cutTheSticks(n, arr, &result_count);

	for (int i = 0; i < result_count; i++) {
		printf("%d\n", result[i]);
	}

	free(result);
	return 0;
}