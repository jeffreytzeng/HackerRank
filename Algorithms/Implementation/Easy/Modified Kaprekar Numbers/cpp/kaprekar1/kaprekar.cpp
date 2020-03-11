#include <cmath>
#include <iostream>

void kaprekarNumbers(int p, int q) {
	bool none = true;

	for (int i = p; i <= q; i++) {
		int d = std::to_string(i).length();
		std::string square = std::to_string(static_cast<long>(pow(i, 2)));
		int l = square.length() > d ? std::atoi(square.substr(0, square.length() - d).c_str()) : 0;
		int r = std::atoi(square.substr(square.length() - d).c_str());

		if (l + r == i) {
			none = false;
			std::cout << i << (i == q ? "" : " ");
		}
	}

	if (none) {
		std::cout << "INVALID RANGE";
	}
}

int main()
{
	int p = 0, q = 0;
	std::cin >> p >> q;
	kaprekarNumbers(p, q);
}