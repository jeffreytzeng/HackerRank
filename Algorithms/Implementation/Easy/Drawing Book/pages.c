#include <stdio.h>

int main()
{
	int n = 0, p = 0;
	scanf("%d\n%d", &n, &p);
	printf("%d", p > n / 2 ? n / 2 - p / 2 : p / 2);
	return 0;
}