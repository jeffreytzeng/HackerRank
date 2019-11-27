#include <iostream>
#include <vector>
using namespace std;

void PrintArray(vector<int> &arr);
void Sort(vector<int> &arr);

int main()
{
    int n = 0;
    cin >> n;
    vector<int> numbers(n, 0);

    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    Sort(numbers);
}

void PrintArray(vector<int> &arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << (i == arr.size()-1 ? to_string(arr[i]) : to_string(arr[i]) + " ");
    }
}

void Sort(vector<int> &arr) {
    for (int i = arr.size()-1; i >= 0; i--) {
        int key = arr[i];
        int j = i-1;

        while (j >= 0 && key <= arr[j]) {
            arr[j+1] = arr[j];
            j--;
            PrintArray(arr);
            cout << endl;
        }
        arr[j+1] = key;
    }

    PrintArray(arr);
}