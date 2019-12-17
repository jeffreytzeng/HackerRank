#include <iostream>
using namespace std;

class BobbleSort
{
	public:
		BobbleSort(int *arr, int size):
			arr_(arr),
			size_(size)
		{
		}

		int Sort() {
			int swap = 0;

			while (size_-->1) {
				for (int i = 0; i < size_; i++) {
					if (arr_[i] > arr_[i+1]) {
						int temp = arr_[i];
						arr_[i] = arr_[i+1];
						arr_[i+1] = temp;
						swap++;
					}
				}
			}
			return swap;
		}

	private:
		int *arr_;
		int size_;
};

int main()
{
	int n = 0;
	cin >> n;

	int array[n];
	for (int i = 0; i < n; i++) {
		cin >> array[i];
	}

	BobbleSort *bobble = new BobbleSort(array, n);
	int swap = bobble->Sort();
	cout << "Array is sorted in " << swap << " swaps." << endl;
	cout << "First Element: " << array[0] << endl;
	cout << "Last Element: " << array[n-1] << endl;
}