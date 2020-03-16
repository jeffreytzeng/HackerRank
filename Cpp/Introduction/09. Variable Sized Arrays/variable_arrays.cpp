#include <iostream>

int main()
{
	int n = 0, q = 0;
	std::cin >> n >> q;
	int *arr[n];

	for (int i = 0; i < n; i++) {
		int size = 0;
		std::cin >> size;
		arr[i] = new int[size];

		for (int j = 0; j < size; j++) {
			std::cin >> arr[i][j];
		}
	}

	for (int k = 0; k < q; k++) {
		int i = 0, j = 0;
		std::cin >> i >> j;
		std::cout << arr[i][j] << std::endl;
	}

	for (int i = 0; i < n; i++) {
		delete [] arr[i];
	}
}