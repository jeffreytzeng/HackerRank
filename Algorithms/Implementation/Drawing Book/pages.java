import java.util.Scanner;

class Pages {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		in.skip("\n");
		int p = in.nextInt();
		int turns = 0;

		if (p > n / 2) {
			turns = n % 2 == 1 ? (n - p) / 2 : n / 2 - p / 2;
		} else {
			turns = p / 2;
		}

		System.out.println(turns);
	}
}