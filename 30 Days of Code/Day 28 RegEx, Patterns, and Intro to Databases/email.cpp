#include <algorithm>
#include <iostream>
#include <regex>
#include <vector>

using namespace std;

int main()
{
	int names = 0;
	cin >> names;
	cin.get();

	vector<string> gmails;

	for (int i = 0; i < names; i++) {
		string email = "";
		getline(cin, email);
		regex pattern("@gmail.com");

		if (regex_search(email, pattern)) {
			gmails.push_back(email.substr(0, email.find(" ")));
		}
	}

	sort(gmails.begin(), gmails.end());

	for (int i = 0; i < gmails.size(); i++) {
		cout << gmails[i] << endl;
	}
}