#include <stdio.h>

int main()
{
	int return_year = 0;
	int return_month = 0;
	int return_day = 0;
	int due_year = 0;
	int due_month = 0;
	int due_day = 0;
	scanf("%d %d %d", &return_day, &return_month, &return_year);
	scanf("%d %d %d", &due_day, &due_month, &due_year);

	int fine = 0;

	if (return_year > due_year) {
		fine += 10000;
	} else if (return_year == due_year) {
		if (return_month > due_month) {
			fine += (return_month - due_month) * 500;
		} else if (return_month == due_month) {
			if (return_day > due_day) {
				fine += (return_day - due_day) * 15;
			}
		}
	}

	printf("%d", fine);
	return 0;
}