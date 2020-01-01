#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	cin >> n;

	int arr[n];
	bool primes[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		primes[i] = true;
	}

	for (int i = 0; i < n; i++) {
		if (arr[i] == 1) {
			primes[i] = false;
		} else if (arr[i] > 3) {
			for (int j = 2; j*j <= arr[i]; j++) {
				if (arr[i] % j == 0) {
					primes[i] = false;
					break;
				}
			}
		}
	}

	for (int i = 0; i < n; i++) {
		cout << (primes[i] ? "Prime" : "Not prime") << endl;
	}
}