#include <stdio.h>
#include "kaprekar.h"

int main()
{
	int limits[2];
	scanf("%d\n%d", &limits[0], &limits[1]);
	KaprekarNumbers kaprekar = {.ShowNumbers = Show};
	kaprekar.ShowNumbers(limits);
	return 0;
}