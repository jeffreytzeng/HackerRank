#ifndef KAPREKAR
#define KAPREKAR

#include <vector>

class KaprekarNumbers
{
	public:
		KaprekarNumbers(int *limits);

		void ShowNumbers();

	private:
		std::vector<int> kaprekar_numbers_;
		int *limits_;

		void FindNumbers();
};

#endif