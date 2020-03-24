#include <stdio.h>

int main()
{
	char *str[] = {"one", "two", "three", "four", "five",
				  "six", "seven", "eight", "nine"};
	int a = 0, b = 0;
	scanf("%d\n%d", &a, &b);

	for (int i = a; i <= b; i++) {
		if (i < 10) {
			printf("%s\n", str[i - 1]);
		} else {
			printf("%s\n", i % 2 ? "odd" : "even");
		}
	}

	return 0;
}