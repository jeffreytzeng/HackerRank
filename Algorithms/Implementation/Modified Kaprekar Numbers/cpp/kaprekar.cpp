#include <bits/stdc++.h>
#include "kaprekar.hpp"

Kaprekar::Kaprekar(int p, int q)
{
	KaprekarNumbers(p, q);
}

int Kaprekar::Digits(long long number) {
	int count = 0;

	while (number != 0) {
		number /= 10;
		count++;
	}

	return count;
}

void Kaprekar::KaprekarNumbers(int p, int q) {
	for (int i = p; i <= q; i++) {
		int right_size = Digits(i);
		long long square = pow(i, 2);
		int left_size = Digits(square) - right_size;

		string square_str = std::to_string(square);
		string right_str = square_str.substr(left_size, right_size);
		string left_str = square_str.substr(0, left_size);

		int left = 0;
		stringstream lss(left_str);
		lss >> left;
		int right = 0;
		stringstream rss(right_str);
		rss >> right;

		int sum = left + right;

		if (sum == i) {
			kaprekar_.push_back(i);
		}
	}
}

void Kaprekar::Show() {
	if (kaprekar_.size() == 0) {
		cout << "INVALID RANGE";
	} else {
		for (int i = 0; i < kaprekar_.size(); i++) {
			cout << kaprekar_[i] << (i == kaprekar_.size()-1 ? "" : " ");
		}
	}
}