#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void kaprekarNumbers(int p, int q) {
	enum None {False, True};
	enum None none = True;

	for (int i = p; i <= q; i++) {
		int d = 0, n = i;
		while (n != 0) {
			d++;
			n /= 10;
		}
		long square = (long)pow(i, 2);
		long temp = square;
		int square_size = 0;
		while (temp != 0) {
			square_size++;
			temp /= 10;
		}
		int l = square_size > d ? square / (int)pow(10, d) : 0;
		int r = square - (square / (int)pow(10, d)) * (int)pow(10, d);

		if (l + r == i) {
			none = False;
			i == q ? printf("%d", i) : printf("%d ", i);
		}
	}

	if (none) {
		printf("INVALID RANGE");
	}
}

int main()
{
	int p = 0, q = 0;
	scanf("%d\n%d", &p, &q);
	kaprekarNumbers(p, q);
	return 0;
}