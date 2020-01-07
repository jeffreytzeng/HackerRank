#ifndef MINIMUM
#define MINIMUM

#include <stdexcept>
#include <vector>

template <class T>
int MinimumIndex(std::vector<T> &arr) {
	if (arr.size() == 0) {
		throw std::invalid_argument("Cannot get the minimum value index from an empty sequence");
	}

	int index = 0;

	for (int i = 1; i < arr.size(); i++) {
		if (arr[i] < arr[index]) {
			index = i;
		}
	}

	return index;
}

#endif