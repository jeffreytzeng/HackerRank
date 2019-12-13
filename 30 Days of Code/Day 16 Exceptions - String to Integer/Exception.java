import java.util.Scanner;

class Exception {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		String str = input.nextLine();
		Integer number = 0;

		try {
			number = Integer.parseInt(str);
			System.out.println(number);
		} catch (NumberFormatException e) {
			System.out.println("Bad String");
		}
	}
}