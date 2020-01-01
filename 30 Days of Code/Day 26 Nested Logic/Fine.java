import java.util.Scanner;

public class Fine {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int return_day = input.nextInt();
		int return_month = input.nextInt();
		int return_year = input.nextInt();
		int due_day = input.nextInt();
		int due_month = input.nextInt();
		int due_year = input.nextInt();
		int fine = 0;

		if (return_year == due_year) {
			if (return_month > due_month) {
				fine += (return_month - due_month) * 500;
			} else if (return_month == due_month) {
				if (return_day > due_day) {
					fine += (return_day - due_day) * 15;
				}
			}
		} else if (return_year > due_year) {
			fine += 10000;
		}

		System.out.println(fine);
	}
}