#include <bits/stdc++.h>
using namespace std;

int main()
{
	int col = 6, row = 6;
	vector<vector<int >> vector_array;

	for (int r = 0; r < row; r++) {
		vector<int> a(row, 0);

		for (int c = 0; c < col; c++) {
			cin >> a[c];
		}
		vector_array.push_back(a);
	}

	int glass_col = 4, glass_row = 4;
	int glass_size = glass_row * glass_col;
	vector<int> hourglass(glass_size, 0);

	for (int gr = 0; gr < glass_row; gr++) {
		for (int gc = 0; gc < glass_col; gc++) {
			for (int igr = gc; igr < gc + 3; igr++) {
				for (int igc = gr; igc < gr + 3; igc++) {
					if ((igr == gc + 1) && (igc == gr || igc == gr + 2)) {
						continue;
					} else {
						hourglass[gr+gc*glass_row] += vector_array[igr][igc];
					}
				}
			}
		}
	}
//	for (auto val : hourglass) cout << val << " ";
	sort(hourglass.begin(), hourglass.end());
	cout << *(hourglass.end()-1);
}
					