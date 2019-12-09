#include <bits/stdc++.h>
#include "kaprekar.hpp"

int main()
{
	int p = 0, q = 0;
	cin >> p >> q;
	Kaprekar numbers(p, q);
	numbers.Show();
}