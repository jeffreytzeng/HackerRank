#include <stdio.h>

int main()
{
	int number = 0;
	scanf("%d", &number);
	int size = 0;
	int binary[64];

	while (number != 0) {
		binary[size++] = number % 2;
		number /= 2;
	}

	int max = 0;
	for (int i = size-1, count = 0; i >= 0; i--) {
		count = binary[i] == 0 ? 0 : ++count;
		max = count > max ? count : max;
	}

	printf("%d", max);

	return 0;
}