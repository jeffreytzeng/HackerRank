#include <algorithm>
#include <iostream>

int main ()
{
	int b = 0, n = 0, m = 0;
	std::cin >> b >> n >> m;

	int keyboard[n], usb[m];
	for (int i = 0; i < n; i++) {
		std::cin >> keyboard[i];
	}
	std::sort(keyboard, keyboard + n, [](int a, int b) { return a > b;});

	for (int i = 0; i < m; i++) {
		std::cin >> usb[i];
	}
	std::sort(usb, usb + m, [](int a, int b) { return a < b;});

	int max = -1;
	for (int i = 0, j = 0; i < n; i++) {
		for (; j < m; j++) {
			if (keyboard[i] + usb[j] > b) break;
			if (keyboard[i] + usb[j] > max) {
				max = keyboard[i] + usb[j];
			}
		}
	}

	std::cout << max;
}