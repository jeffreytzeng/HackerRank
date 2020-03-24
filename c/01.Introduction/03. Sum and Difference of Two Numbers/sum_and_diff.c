#include <stdio.h>

int main()
{
	int a = 0, b = 0;
	float c = 0, d = 0;
	scanf("%d %d\n%f %f", &a, &b, &c, &d);

	printf("%d %d\n%0.1f %0.1f", a + b, a - b, c + d, c - d);

	return 0;
}