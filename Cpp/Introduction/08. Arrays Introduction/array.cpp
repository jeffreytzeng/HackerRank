#include <iostream>

int main()
{
	int n = 0;
	std::cin >> n;
	int arr[n];

	for (int i = 0; i < n; i++) {
		std::cin >> arr[i];
	}

	for (int i = n; i > 0; i--) {
		std::cout << arr[i - 1] << (i == 0 ? "" : " ");
	}
}