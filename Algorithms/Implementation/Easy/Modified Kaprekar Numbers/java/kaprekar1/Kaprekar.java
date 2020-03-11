import java.util.Arrays;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;


class Kaprekar {
	private static void kaprekarNumbers(int p, int q) {
		Integer[] kaprekar_numbers = new Integer[0];

		for (int i = p; i <= q; i++) {
			int d = Integer.toString(i).length();
			String square = String.valueOf((long)Math.pow(i, 2));
			int l = square.length() > d ?
					Integer.parseInt(square.substring(0, square.length() - d)) : 0;
			int r = Integer.parseInt(square.substring(square.length() - d));
			
			if (l + r == i) {
				List<Integer> list = new ArrayList<>(Arrays.asList(kaprekar_numbers));
				list.add(i);
				kaprekar_numbers = list.toArray(kaprekar_numbers);
			}
		}

		if (kaprekar_numbers.length > 0) {
			for (int i = 0; i < kaprekar_numbers.length; i++) {
				System.out.print(i == kaprekar_numbers.length - 1 ?
						kaprekar_numbers[i] : kaprekar_numbers[i] + " ");
			}
		} else {
			System.out.println("INVALID RANGE");
		}
	}

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int p = input.nextInt();
		int q = input.nextInt();
		kaprekarNumbers(p, q);
	}
}