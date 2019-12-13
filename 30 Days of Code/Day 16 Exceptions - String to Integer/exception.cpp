#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	string str = "";
	cin >> str;
	int number = 0;

	try {
		number = stoi(str);
		cout << number;
	} catch (...) {
		cout << "Bad String";
	}
}
		
