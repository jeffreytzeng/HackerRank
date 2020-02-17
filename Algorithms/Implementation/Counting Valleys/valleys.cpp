#include <iostream>

int Valleys(int n, string s) {
	int valleys = 0;
	int previous_level = 0;
	int current_level = 0;

	for (int i = 0; i < n; i ++) {
		previous_level = current_level;
		current_level += s[i] == 'D' ? -1 : 1;

		if ((previous_level == 0) && (current_level == -1)) {
			valleys++;
		}
	}

	return valleys;
}

int main()
{
	int n = 0;
	string s = "";
	std::cin >> n >> s;

	std::cout << Valleys(n, s);
}