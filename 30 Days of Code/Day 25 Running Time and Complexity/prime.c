#include <stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[n];
	int prime[n];

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		prime[i] = 1;
	}

	for (int i = 0; i < n; i++) {
		if (arr[i] == 1) {
			prime[i] = 0;
		} else if (arr[i] > 3) {
			for (int j = 2; j*j <= arr[i]; j++) {
				if (arr[i] % j == 0) {
					prime[i] = 0;
					break;
				}
			}
		}
	}

	for (int i = 0; i < n; i++) {
		prime[i] == 0 ? printf("Not prime\n") : printf("Prime\n");
	}

	return 0;
}
			