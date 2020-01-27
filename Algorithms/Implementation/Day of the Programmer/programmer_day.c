#include <stdio.h>

void FindDate(int feb_days, int year) {
	int month_days[] = {31, feb_days, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int total_days = 0;

	for (int i = 0; i < 12; i++) {
		total_days += month_days[i];

		if (total_days > 256) {
			printf("%02d.%02d.%d", 256-total_days+month_days[i], i+1, year);
			break;
		}
	}
}

void ProgrammerDay(int year) {
	int days_in_feb = 28;

	if (year == 1918) {
		days_in_feb = 15;
	} else {
		int leap_year = 0;

		if (year < 1918) {
			leap_year = year % 4 == 0;
		} else {
			leap_year = (year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0));
		}

		if (leap_year) {
			days_in_feb = 29;
		}
	}

	FindDate(days_in_feb, year);
}

int main() {
	int year = 0;
	scanf("%d", &year);
	ProgrammerDay(year);
	return 0;
}

	