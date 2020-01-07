#include <iostream>
#include <vector>
#include "minimum.hpp"
#include "test_class.hpp"

using namespace std;
typedef int (*pFunc)(std::vector<int> &);

int main()
{
	vector<int> arr;
	pFunc func = MinimumIndex;
	TestArray<int>::TestEmptyArray(func, arr);

	arr.push_back(4);
	arr.push_back(2);
	arr.push_back(1);
	arr.push_back(3);
	TestArray<int>::GetMinimumIndex(func, arr);

	arr.push_back(1);
	TestArray<int>::GetFirstMinimumIndex(func, arr);
}
