#include <bits/stdc++.h>
using namespace std;

int main()
{
	int number = 0;
	cin >> number;
	int size = 0;
	int buf[64] = {0};

	while (number != 0) {
		buf[size++] = number % 2;
		number /= 2;
	}

	string binary = "";
	for (int i = size-1; i >= 0; i--) {
		binary += std::to_string(buf[i]);
	}
	int max = 0;
	for (int i = 0, count = 0; i < size; i++) {
		count = binary[i] == '0' ? 0 : ++count;
		max = count > max ? count : max;
	}
	cout << max;
}