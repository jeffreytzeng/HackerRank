#include <stdio.h>

int main()
{
	int n = 0, k = 0;
	scanf("%d %d\n", &n, &k);
	int bill[n];

	for (int i = 0; i < n; i++) {
		scanf("%d", &bill[i]);
	}
	bill[k] = 0;

	int b = 0;
	scanf("%d", &b);
	int sum = 0;

	for (int i = 0; i < n; i++) {
		sum += bill[i];
	}

	b == sum / 2 ? printf("Bon Appetit\n") : printf("%d\n", b - sum / 2);
	return 0;
}