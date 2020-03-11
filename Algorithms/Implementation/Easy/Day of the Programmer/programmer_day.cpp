#include <iomanip>
#include <iostream>
#include <sstream>

using namespace std;

void LeftDays(int date[2], int feb_days) {
	int month_days[12] = {31, feb_days, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int total_days = 0;

	for (int i = 0; i < 12; i++) {
		total_days += month_days[i];

		if (total_days > 256) {
			total_days -= month_days[i];
			date[0] = 256 - total_days;
			date[1] = i+1;
			break;
		}
	}
}

string ProgrammerDay(int year) {
	int date[2];

	if (year == 1918) {
		LeftDays(date, 15);
	} else {
		bool leap_year = false;

		if (year < 1918) {
			leap_year = (year % 4 == 0);
		} else {
			leap_year = (year % 400 == 0) || ((year % 4 == 0) && (year % 100));
		}

		if (leap_year) {
			LeftDays(date, 29);
		} else {
			LeftDays(date, 28);
		}
	}

	stringstream ss;
	ss << setw(2) << setfill('0') << date[0] << "." << setw(2) << setfill('0') << date[1] << "." << year;
	return ss.str();
}

int main()
{
	int year = 0;
	cin >> year;
	cout << ProgrammerDay(year);
}