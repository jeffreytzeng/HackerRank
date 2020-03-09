#include <algorithm>
#include <iostream>
#include <vector>

std::vector<int> cutTheSticks(std::vector<int> arr) {
	std::sort(arr.begin(), arr.end());
	std::vector<int> result(1, arr.size());

	for (int i = 0; i < arr.size() - 1; i++) {
		if (arr[i] != arr[i+1]) {
			result.push_back(arr.size() - (i+1));
		}
	}

	return result;
}

int main()
{
	int n = 0;
	std::cin >> n;
	std::vector<int> arr(n, 0);

	for (int i = 0; i < n; i++) {
		std::cin >> arr[i];
	}

	std::vector<int> result = cutTheSticks(arr);

	for (int i = 0; i < result.size(); i++) {
		std::cout << result[i] << std::endl;
	}
}