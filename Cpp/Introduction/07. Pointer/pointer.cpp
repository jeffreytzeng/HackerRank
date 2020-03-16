#include <cstdlib>
#include <iostream>

void Update(int *a, int *b) {
	int ai = *a;
	int bi = *b;
	*a = ai + bi;
	*b = abs(ai - bi);
}

int main()
{
	int a = 0, b = 0;
	int *pa = &a;
	int *pb = &b;
	std::cin >> *pa >> *pb;
	Update(pa, pb);
	std::cout << *pa << std::endl << *pb;
}