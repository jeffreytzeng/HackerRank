#include <stdio.h>

int Fabonacci(int x) {
	if (x < 2) {
		return x > 0 ? 1 : 0;
	} else {
		return Fabonacci(x - 1) + Fabonacci(x - 2);
	}
}

int main()
{
	int n = 0;
	scanf("%d", &n);

	printf("%d", Fabonacci(n));
	return 0;
}