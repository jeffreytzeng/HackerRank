import java.util.Scanner;

class Find {
	static int findDigits(int n) {
		int count = 0;
		int origin = n;

		while (n != 0) {
			int divisor = n % 10;

			if (divisor != 0) {
				count += origin % divisor != 0 ? 0 : 1;
			}

			n /= 10;
		}

		return count;
	}

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int t = in.nextInt();

		for (int i = 0; i < t; i++) {
			in.skip("\n");
			int n = in.nextInt();
			System.out.println(findDigits(n));
		}
	}
}