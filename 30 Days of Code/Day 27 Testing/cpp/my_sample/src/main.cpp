#include <iostream>
#include "add.hpp"
using namespace std;

int main()
{
	Addition *add = new Addition();
	cout << add->AddTwo(1, 3);
	delete add;
}
