#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
	return *(int*)a - *(int*)b;
}

int pickingNumbers(int n, int *a) {
	qsort(a, n, sizeof(int), compare);

	int max = 0;
	int start = 0;
	int check = a[0];

	for (int i = 1; i < n; i++) {
		if (abs(check - a[i]) > 1) {
			check = a[i];
			if (i - start > max) {
				max = i - start;
			}
			start = i;
		} else if (i == n-1) {
			if (i - start + 1 > max) {
				max = i - start + 1;
			}
		}
	}
	return max;
}

int main()
{
	int n = 0;
	scanf("%d", &n);

	int a[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	printf("%d\n", pickingNumbers(n, a));
	return 0;
}