#include <algorithm>
#include <cmath>
#include <iostream>
#include "kaprekar.hpp"

KaprekarNumbers::KaprekarNumbers(int *limits):
	limits_(limits)
{
	FindNumbers();
}

void KaprekarNumbers::FindNumbers() {
	for (int i = limits_[0]; i <= limits_[1]; i++) {
		int d = std::to_string(i).length();
		std::string square = std::to_string(static_cast<long>(pow(i, 2)));
		int l = square.length() > d ? atoi(square.substr(0, square.length() - d).c_str()) : 0;
		int r = atoi(square.substr(square.length() - d).c_str());

		if (l + r == i) {
			kaprekar_numbers_.push_back(i);
		}
	}
}

void KaprekarNumbers::ShowNumbers() {
	if (kaprekar_numbers_.size() > 0) {
		for (auto k : kaprekar_numbers_) {
			std::cout << (*std::find(kaprekar_numbers_.begin(), kaprekar_numbers_.end(), k) == 	
						  kaprekar_numbers_.size() - 1 ?
						  std::to_string(k) :
						  std::to_string(k) + " ");
		}
	} else {
		std::cout << "INVALID RANGE";
	}
}
