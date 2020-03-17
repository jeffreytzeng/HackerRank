#include <stdio.h>

void update(int *a, int *b) {
	printf("%d\n%d", *a + *b, *a > *b ? *a - *b : *b - *a);
}

int main()
{
	int i = 0, j = 0;
	scanf("%d\n%d", &i, &j);
	int *a = &i;
	int *b = &j;

	update(a, b);

	return 0;
}