#include <iostream>

int main()
{
	int a = 0, b = 0;
	std::cin >> a >> b;
	std::string str[9] = {"one", "two", "three", "four", "five",
						  "six", "seven", "eight", "nine"};

	for (int i = a; i <= b; i++) {
		if (i > 9) {
			std::cout << (i % 2 ? "odd" : "even") << std::endl;
		} else {
			std::cout << str[i-1] << std::endl;
		}
	}
}