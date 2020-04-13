#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char *s = (char*)calloc(1000, sizeof(char));
	scanf("%[^\n]%s", s);
	s = realloc(s, strlen(s) + 1);
	int i = 0;
	
	while (s[i] != '\0') {
		s[i] == ' ' ? printf("\n") : printf("%c", s[i]);
		i++;
	}
	
	free(s);

	return 0;
}