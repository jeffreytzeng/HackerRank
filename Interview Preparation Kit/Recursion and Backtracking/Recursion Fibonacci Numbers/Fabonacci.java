import java.util.Scanner;

public class Fabonacci {
	static int Recursion(int x) {
		if (x < 2) {
			return x > 0 ? 1 : 0;
		} else {
			return Recursion(x - 1) + Recursion(x - 2);
		}
	}

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int n = input.nextInt();
		System.out.println(Recursion(n));
	}
}