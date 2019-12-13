#include <bits/stdc++.h>
using namespace std;

class Difference
{
	public:
		int maximumDifference;

		Difference(vector<int> arr):
			elements(arr),
			maximumDifference(0)
		{}

		void computeDifference() {
			for (int i = 0; i < elements.size()-1; i++) {
				for (int j = i+1; j < elements.size(); j++) {
					int diff = abs(elements[i]-elements[j]);
					if (diff > maximumDifference) {
						maximumDifference = diff;
					}
				}
			}
		}

	private:
		vector<int> elements;
};

int main()
{
	int N;
	cin >> N;

	vector<int> a;

	for (int i = 0; i < N; i++) {
		int e;
		cin >> e;

		a.push_back(e);
	}

	Difference d(a);

	d.computeDifference();

	cout << d.maximumDifference;

	return 0;
}