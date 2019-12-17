#include <iostream>
#include <vector>
using namespace std;

template<class T>
void printArray(vector<T> arr) {
	for (auto a : arr) {
		cout << a << endl;
	}
}


int main()
{
	int n = 0;
	cin >> n;
	vector<int> int_array(n);
	for (int i = 0; i < n; i++) {
		cin >> int_array[i];
	}

	cin >> n;
	vector<string> string_vector(n);
	for (int i = 0; i < n; i++) {
		cin >> string_vector[i];
	}

	printArray<int>(int_vector>;
	printArray<string>(string_vector);
}