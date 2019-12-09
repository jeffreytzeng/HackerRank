import java.util.Arrays;
import java.util.Scanner;
import java.lang.Math;

class Kaprekar {
	private static int digits(Long number) {
		int count = 0;
		while (number != 0) {
			number /= 10;
			count++;
		}
		return count;
	}

	private static void kaprekarNumbers(int p, int q) {
		int k_capacity = 30;
		int k_size = 0;
		int[] kaprekar = new int[k_capacity];

		for (int i = p; i <= q; i++) {
			int right_size = digits(Long.valueOf(i));
			Long square = (long)Math.pow(i, 2);
			int left_size = digits(square) - right_size;

			int left = (int)(square / Math.pow(10, right_size));
			int right = (int)(square % Math.pow(10, right_size));
			int sum = left + right;

			if (sum == i) {
				if (k_size+1 > k_capacity) {
					k_capacity *= 2;
					Arrays.copyOf(kaprekar, k_capacity);
				}
				kaprekar[k_size++] = i;
			}
		}

		if (k_size == 0) {
			System.out.println("INVALID RANGE");
		} else {
			for (int i = 0; i < k_size; i++) {
				System.out.print(i == k_size-1 ? kaprekar[i] : kaprekar[i] + " ");
			}
		}
	}

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int p = input.nextInt();
		int q = input.nextInt();
		kaprekarNumbers(p, q);
	}
}