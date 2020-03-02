#include <stdio.h>
#include <stdlib.h>

char *catAndMouse(int x, int y, int z) {
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
	scanf("%d", &q);

	int x = 0, y = 0, z = 0;
	for (int i = 0; i < q; i++) {
		scanf("%d %d %d", &x, &y, &z);
		printf("%s\n", catAndMouse(x, y, z));
	}

	return 0;
}
