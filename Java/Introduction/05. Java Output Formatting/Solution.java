import java.util.Scanner;

class Solution {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);

		System.out.println("================================");
		for (int i = 0; i < 3; i++) {
			System.out.printf("%-15s%03d\n", in.next(), in.nextInt());
		}
		System.out.println("================================");
		in.close();
	}
}