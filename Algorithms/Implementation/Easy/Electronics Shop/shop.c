#include <stdio.h>
#include <stdlib.h>

int ascending(const void *a, const void *b) {
	return *(int*)a - *(int*)b;
}
int dscending(const void *a, const void *b) {
	return ascending(a, b) * -1;
}

int main()
{
	int b = 0, n = 0, m = 0;
	scanf("%d %d %d", &b, &n, &m);

	int keyboard[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &keyboard[i]);
	}
	qsort(keyboard, n, sizeof(int), dscending);

	int usb[m];
	for (int i = 0; i < m; i++) {
		scanf("%d", &usb[i]);
	}
	qsort(usb, m, sizeof(int), ascending);

	int max = -1;
	for (int i = 0, j = 0; i < n; i++) {
		for (; j < m; j++) {
			if (keyboard[i] + usb[j] > b) break;
			if (keyboard[i] + usb[j] > max) {
				max = keyboard[i] + usb[j];
			}
		}
	}

	printf("%d\n", max);
	return 0;
}