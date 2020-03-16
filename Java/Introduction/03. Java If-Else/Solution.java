import java.util.Scanner;

class Solution {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		if (n % 2 == 1) {
			System.out.print("Weird");
		} else if (n > 20) {
			System.out.print("Not Weird");
		} else {
			System.out.print(n < 6 ? "Not Weird" : "Weird");
		}
	}
}