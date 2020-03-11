#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <vector>

int pickingNumbers(std::vector<int> a) {
	std::sort(a.begin(), a.end());

	int max = 0;
	int start = 0;
	int check = a[0];

	for (int i = 1; i < a.size(); i++) {
		if (abs(check - a[i]) > 1) {
			check = a[i];
			if (i - start > max) {
				max = i - start;
			}
			start = i;
		} else if (i == a.size() - 1) {
			if (i - start + 1 > max) {
				max = i - start + 1;
			}
		}
	}

	return max;
}

int main()
{
	int n = 0;
	std::cin >> n;
	std::vector<int> a(n, 0);

	for (int i = 0; i < n; i++) {
		std::cin >> a[i];
	}

	std::cout << pickingNumbers(a);
}