#ifndef TEST
#define TEST

#include <Algorithm>
#include <iostream>
#include <stdexcept>
#include <vector>
#include "../src/minimum.hpp"

// typedef only can be used with actual type like std::vector<int>.
//typedef int (*pFunc)(std::vector<int> &);

// template alias only spport after gcc 10.1
//template <class T>
//using pFunc1 = int (*)(std::vector<T> &);

template <class T>
class TestArray
{
	public:
		static void TestEmptyArray(int (*)(std::vector<T> &), std::vector<T> &);
		static int GetMinimumIndex(int (*)(std::vector<T> &), std::vector<T> &);
		static void GetFirstMinimumIndex(int (*)(std::vector<T> &), std::vector<T> &);
};


template <class T>
void TestArray<T>::TestEmptyArray(int (*func)(std::vector<T> &), std::vector<T> &arr) {
	try {
		func(arr);
	} catch (std::invalid_argument &e) {
		std::cout << e.what() << std::endl;
	}
}

template <class T>
int TestArray<T>::GetMinimumIndex(int (*func)(std::vector<T> &), std::vector<T> &arr) {
	int minimum = std::min_element(arr.begin(), arr.end()) - arr.begin();

	if (minimum == func(arr)) {
		std::cout << __func__ << " Ok" << std::endl;
	} else {
		std::cout << __func__ << " Fail" << std::endl;
	}
	return minimum;
}

template <class T>
void TestArray<T>::GetFirstMinimumIndex(int (*func)(std::vector<T> &), std::vector<T> &arr) {
	int first_minimum = 0;
	for (int i = 0; i < arr.size(); i++) {
		if (arr[i] < arr[first_minimum]) {
			first_minimum = i;
		}
	}

	if (first_minimum == func(arr)) {
		std::cout << __func__ << " Ok" << std::endl;
	} else {
		std::cout << __func__ << " Fail" << std::endl;
	}
}


#endif