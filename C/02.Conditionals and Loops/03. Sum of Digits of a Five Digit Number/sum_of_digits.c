#include <stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);

	int sum = 0;
	while (n != 0) {
		sum += n % 10;
		n /= 10;
	}

	printf("%d", sum);
	return 0;
}