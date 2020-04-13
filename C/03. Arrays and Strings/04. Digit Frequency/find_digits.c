#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char *s = (char*)malloc(1000 * sizeof(char));
	scanf("%s", s);
	s = realloc(s, strlen(s) + 1);
	int i = 0, digits[10] = {0};

	while (s[i] != '\0') {
		if ((s[i] >= '0') && (s[i] <= '9')) {
			digits[s[i] - '0']++;
		}
		i++;
	}

	for (int i = 0; i < 10; i++) {
		i == 9 ? printf("%d", digits[i]) : printf("%d ", digits[i]);
	}

	free(s);
	return 0;
}