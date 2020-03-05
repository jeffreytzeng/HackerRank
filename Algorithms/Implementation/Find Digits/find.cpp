#include <iostream>

int findDigits(int n) {
	int count = 0;
	int origin = n;

	while (n != 0) {
		int divisor = n % 10;

		if (divisor != 0) {
			count += origin % divisor ? 0 : 1;
		}
		n /= 10;
	}

	return count;
}

int main()
{
	int t = 0;
	std::cin >> t;

	for (int i = 0; i < t; i++) {
		int n = 0;
		std::cin >> n;
		std::cout << findDigits(n) << std::endl;
	}
}