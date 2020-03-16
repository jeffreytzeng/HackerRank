#include <algorithm>
#include <iostream>

int MaxOfFour(int a, int b, int c, int d) {
	return std::max({a, b, c, d}, [](int a, int b) { return a < b;});
}

int main()
{
	int a = 0, b = 0, c = 0, d = 0;
	std::cin >> a >> b >> c >> d;

	std::cout << MaxOfFour(a, b, c, d);
}