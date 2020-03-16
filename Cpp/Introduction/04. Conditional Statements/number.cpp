#include <iostream>

int main()
{
	int n = 0;
	std::cin >> n;

	if (n > 9) {
		std::cout << "Greater than 9";
	} else if (n == 1) {
		std::cout << "one";
	} else if (n == 2) {
		std::cout << "two";
	} else if (n == 3) {
		std::cout << "three";
	} else if (n == 4) {
		std::cout << "four";
	} else if (n == 5) {
		std::cout << "five";
	} else if (n == 6) {
		std::cout << "six";
	} else if (n == 7) {
		std::cout << "seven";
	} else if (n == 8) {
		std::cout << "eight";
	} else {
		std::cout << "nine";
	}
}