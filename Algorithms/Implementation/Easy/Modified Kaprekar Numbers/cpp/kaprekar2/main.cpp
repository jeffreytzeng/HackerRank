#include <iostream>
#include "kaprekar.hpp"

int main()
{
	int limits[2] = {0};
	std::cin >> limits[0] >> limits[1];
	KaprekarNumbers kaprekar(limits);
	kaprekar.ShowNumbers();
}