import java.text.NumberFormat;
import java.util.Locale;
import java.util.Scanner;

class Solution {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		double pay = in.nextDouble();
		Locale[] locales = {Locale.US, new Locale("en", "IN"), Locale.CHINA, Locale.FRANCE};
		String[] countries = {"US", "India", "China", "France"};

		for (int i = 0; i < 4; i++) {
			System.out.println(countries[i] + ": " + NumberFormat.getCurrencyInstance(locales[i]).format(pay));
		}
	}
}