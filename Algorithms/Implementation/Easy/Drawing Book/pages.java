import java.util.Scanner;

class Pages {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		in.skip("\n");
		int p = in.nextInt();
		System.out.print(p > n / 2 ? n / 2 - p / 2 : p / 2);
	}
}