#include <stdio.h>

int main()
{
	char ch = 0;
	char s[100] = {0};
	char sen[100] = {0};

	scanf("%c%*c%s%*c%[^\n]s", &ch, s, sen);
	printf("%c\n%s\n%s", ch, s, sen);

	return 0;
}