#include <bits/stdc++.h>
using namespace std;

class Book
{
	public:
		Book(string title, string author):
			title_(title),
			author_(author)
		{}

		virtual void display()=0;

	protected:
		string title_;
		string author_;
};

class MyBook: public Book
{
	public:
		MyBook(string title, string author, int price):
			Book(title, author),
			price_(price)
		{}

		virtual void display() {
			cout << "Title: " + title_ << endl;
			cout << "Author: " + author_ << endl;
			cout << "Price: " << price_;
		}

	private:
		int price_;
};

int main()
{
	string title = "", author = "";
	int price = 0;
	getline(cin, title);
	getline(cin, author);
	cin >> price;

	MyBook *novel = new MyBook(title, author, price);
	novel->display();
	delete novel;
}