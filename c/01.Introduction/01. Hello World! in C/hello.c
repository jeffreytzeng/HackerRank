#include <stdio.h>

int main()
{
	char s[100];
	scanf("%[^\n]", s);

	printf("Hello, World!\n%s", s);

	return 0;
}