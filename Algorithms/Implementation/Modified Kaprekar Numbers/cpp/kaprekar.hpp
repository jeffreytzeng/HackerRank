#ifndef KAPREKAR
#define KAPREKAR

using namespace std;

class Kaprekar
{
	public:
		Kaprekar(int p, int q);

		void Show();

	private:
		std::vector<int> kaprekar_;

		int Digits(long long number);
		void KaprekarNumbers(int p, int q);
};

#endif