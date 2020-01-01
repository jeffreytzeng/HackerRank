import java.util.Scanner;

public class Prime {
	static boolean IsPrime(int number) {
		boolean prime = true;

		if (number > 3) {
			for (int i = 2; i*i <= number; i++) {
				if (number % i == 0) {
					prime = false;
					break;
				}
			}
		} else if (number == 1) {
			prime = false;
		}
		return prime;
	}

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int n = input.nextInt();

		for (int i = 0; i < n; i++) {
			System.out.println(IsPrime(input.nextInt()) ? "Prime" : "Not prime");
		}
	}
}