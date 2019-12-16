#include <cxxabi.h>
#include <iostream>
#include <typeinfo>

using namespace std;

// typeid(obj).name() returns type + number of characters + entry point in the c++ runtime library.
// ex: typeid(this).name() returns P18AdvancedArithmatic (means pointer with 18 characters.)
class AdvancedArithmatic {
	public:
		virtual int divisorSum(int n)= 0;
		string BaseName() {
			char *demangled_name = abi::__cxa_demangle(typeid(this).name(), 0, 0, 0);
			string name(demangled_name);
			free(demangled_name);
			return name.substr(0, name.length()-1);
		}
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
//	cout << "I implemented: AdvancedArithmatic" << endl;
	cout << "I implemented: " << cal->BaseName() << endl;
	cout << cal->divisorSum(num);
	delete cal;
}