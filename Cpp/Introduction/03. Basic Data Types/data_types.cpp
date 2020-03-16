#include <iostream>

int main()
{
	int i = 0;
	long l = 0;
	char c = 0;
	float f = 0;
	double d = 0;

	scanf("%d %ld %c %f %lf", &i, &l, &c, &f, &d);

	printf("%d\n%ld\n%c\n%f\n%lf", i, l, c, f, d);
}