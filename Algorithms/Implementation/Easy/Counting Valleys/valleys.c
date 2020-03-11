#include <stdio.h>

int Valleys(int n, char *s) {
	int valleys = 0;
	int previous_level = 0;
	int current_level = 0;

	for (int i = 0; i < n; i++) {
		previous_level = current_level;
		current_level += s[i] == 'D' ? -1 : 1;

		if ((previous_level == 0) && (current_level == -1)) {
			valleys++;
		}
	}

	return valleys;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	char s[n];
	for (int i = 0; i < n; i++) {
		scanf("%c", &s[i]);
	}

	printf("%d", Valleys(n, s));
	return 0;
}