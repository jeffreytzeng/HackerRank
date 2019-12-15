#include <iostream>
#include <list>

using namespace std;

class Solution
{
	public:
		void enqueueCharacter(char c) {
			queue_.push_back(c);
		}

		char dequeueCharacter() {
			char c = queue_.front();
			queue_.pop_front();
			return c;
		}

		void pushCharacter(char c) {
			stack_.push_back(c);
		}

		char popCharacter() {
			char c = stack_.back();
			stack_.pop_back();
			return c;
		}

	private:
		list<char> queue_;
		list<char> stack_;
};

int main()
{
	string str;
	cin >> str;

	Solution obj;

	for (auto s : str) {
		obj.pushCharacter(s);
		obj.enqueueCharacter(s);
	}

	bool isPalindrome = true;

	for (int i = 0; i < str.length()/2; i++) {
		if (obj.popCharacter() != obj.dequeueCharacter()) {
			isPalindrome = false;
			break;
		}
	}

	cout << "The word, " << str << (isPalindrome ? ", is a palindrome." : ", is not a palindrome.");
}