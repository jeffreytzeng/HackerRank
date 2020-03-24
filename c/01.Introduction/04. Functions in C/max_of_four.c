#include <stdio.h>

int max_of_four(int, int, int, int);

int main()
{
	int a = 0, b = 0, c = 0, d = 0;
	scanf("%d\n%d\n%d\n%d", &a, &b, &c, &d);
	printf("%d", max_of_four(a, b, c, d));

	return 0;
}

int max_of_four(int a, int b, int c, int d) {
	int m1 = a > b ? a : b;
	int m2 = c > d ? c : d;

	return m1 > m2 ? m1 : m2;
}