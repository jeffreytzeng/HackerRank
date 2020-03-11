#include <iostream>
#include <cstdlib>

std::string catAndMouse(int x, int y, int z) {
	int catA = abs(x - z);
	int catB = abs(y - z);

	if (catA == catB) {
		return "Mouse C";
	} else {
		return (catA < catB ? "Cat A" : "Cat B");
	}
}

int main()
{
	int q = 0;
	std::cin >> q;

	int x = 0, y = 0, z = 0;
	for (int i = 0; i < q; i++) {
		std::cin >> x >> y >> z;
		std::cout << catAndMouse(x, y , z) << std::endl;
	}
}