#include <iostream>

using namespace std;

class AdvancedArithmatic {
	public:
		virtual int divisorSum(int n)= 0;
};

// Something wrong in HackerRank's compiler to use std::accumulate()
// Directly add up the divisors.
class Calculator: public AdvancedArithmatic {
	public:
		virtual int divisorSum(int n) override {
			int sum = 0;

			for (int i = 1; i <= n; i++) {
				sum += n%i == 0 ? i : 0;
			}

			return sum;
		}
};

int main()
{
	int num = 0;
	cin >> num;

	AdvancedArithmatic *cal = new Calculator();
	cout << "I implemented: AdvancedArithmatic" << endl;
	cout << cal->divisorSum(num);
	delete cal;
}