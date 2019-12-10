import java.util.Scanner;

class Consecutive {
	public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int number = input.nextInt();
        char[] binary = Integer.toBinaryString(number).toCharArray();

        int max = 0;
        for (int i = 0, count = 0; i < binary.length; i++) {
            count = binary[i] == '0' ? 0 : ++count;
            max = count > max ? count : max;
        }
        System.out.println(max);
	}
}