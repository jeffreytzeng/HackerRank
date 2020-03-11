#include <math.h>
#include <stdio.h>
#include "kaprekar.h"

void Show(int *limits) {
	enum None {False, True};
	enum None none = True;

	for (int i = limits[0]; i <= limits[1]; i++) {
		int d = 0, n = i;
		while (n != 0) {
			d++;
			n /= 10;
		}
		long square = (long)pow(i, 2);
		int square_size = 0;
		long temp = square;
		while (temp != 0) {
			square_size++;
			temp /= 10;
		}
		int l = square_size > d ? square / (int)pow(10, d) : 0;
		int r = square - (square / (int)pow(10, d)) * (int)pow(10, d);

		if (l + r == i) {
			none = False;
			i == limits[1] ? printf("%d", i) : printf("%d ", i);
		}
	}

	if (none) {
		printf("INVALID RANGE");
	}
}
