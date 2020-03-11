#include <iostream>
#include <set>

int main()
{
	int n = 0;
	std::cin >> n;

	int ar[n];
	std::set<int> colors;
	int pairs = 0;

	for (int i = 0; i < n; i++) {
		std::cin >> ar[i];

		if (!colors.insert(ar[i]).second) {
			pairs++;
			colors.erase(ar[i]);
		}
	}

	std::cout << pairs;
}