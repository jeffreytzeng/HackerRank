#include <iostream>
using namespace std;

int main()
{
    int t = 0;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n = 0, k = 0;
        cin >> n >> k;

        cout << (((k-1)|k) <= n ? k-1 : k-2) << endl;
    }
}
    
