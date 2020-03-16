import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

class Solution {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int t = in.nextInt();
		in.skip("\n");

		for (int i = 0; i < t; i++) {
			String s = in.nextLine();
			List<String> fits = new ArrayList<String>();

			try {
				Long l = Long.parseLong(s);
				fits.add("* long");

				if ((l <= Integer.MAX_VALUE) && (l >= Integer.MIN_VALUE)) {
					fits.add("* int");
				}

				if ((l <= Short.MAX_VALUE) && (l >= Short.MIN_VALUE)) {
					fits.add("* short");
				}

				if ((l <= Byte.MAX_VALUE) && (l >= Byte.MIN_VALUE)) {
					fits.add("* byte");
				}

				System.out.println(s + " can be fitted in:");

				for (int j = fits.size(); j > 0; j--) {
					System.out.println(fits.get(j - 1));
				}
				
			} catch (NumberFormatException e) {
				System.out.println(s + " can't be fitted anywhere.");
			}
		}
	}
}