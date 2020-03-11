#include <stdio.h>

int main()
{
	int n = 0;
	scanf("%d\n", &n);
	int ar[n];

	int colors[100] = {0};
	int pairs = 0;

	for (int i = 0; i < n; i++) {
		scanf("%d", &ar[i]);

		if (!colors[ar[i] - 1] == 0) {
			pairs++;
			colors[ar[i] - 1] = 0;
		} else {
			colors[ar[i] - 1]++;
		}
	}

	printf("%d", pairs);
	return 0;
}