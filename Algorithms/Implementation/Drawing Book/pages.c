#include <stdio.h>

int main()
{
	int n = 0, p = 0;
	scanf("%d\n%d", &n, &p);
	int turns = 0;

	if (p > n / 2) {
		turns = n % 2 ? (n - p) / 2 : n / 2 - p / 2;
	} else {
		turns = p / 2;
	}

	printf("%d", turns);
	return 0;
}