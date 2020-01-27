import java.util.Scanner;

class ProgrammerDay {
	static String date = "dd.mm.yyyy";

	static void LeftDays(int feb_days) {
		int[] month_days = {31, feb_days, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
		int total_days = 0;

		for (int i = 0; i < 12; i++) {
			total_days += month_days[i];

			if (total_days > 256) {
				String mm = String.format("%02d", i+1);
				date = date.replaceAll("mm", mm);

				total_days -= month_days[i];
				int extra_days = 256 - total_days;
				String dd = String.format("%02d", extra_days);
				date = date.replaceAll("dd", dd);
				break;
			}
		}
	}

	static String TheProgrammerDay(int year) {
		date = date.replaceAll("yyyy", Integer.toString(year));

		if (year == 1918) {
			LeftDays(15);
		} else {
			boolean leap_year = false;

			if (year < 1918) {
				leap_year = (year % 4 == 0);
			} else {
				leap_year = (year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0));
			}

			if (leap_year) {
				LeftDays(29);
			} else {
				LeftDays(28);
			}
		}
		return date;
	}

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		System.out.println(TheProgrammerDay(in.nextInt()));
	}
}