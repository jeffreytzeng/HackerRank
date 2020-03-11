#include <iostream>

int main()
{
	int n = 0, p = 0;
	std::cin >> n >> p;
	std::cout << (p > n / 2 ? n / 2 - p / 2 : p / 2);
}