import java.util.Scanner;

class Consecutive2 {
	public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int number = input.nextInt();
        String[] str = Integer.toBinaryString(number).split("0");

        int max = str[0].length();
		for (String s : str) {
			if (s.length() > max) {
				max = s.length();
			}
		}
        System.out.println(max);
	}
}