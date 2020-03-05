import java.util.Arrays;
import java.util.Scanner;

class Pick {
	static int pickingNumbers(int[] a) {
		Arrays.sort(a);

		int max = 0;
		int start = 0;
		int check = a[0];

		for (int i = 1; i < a.length; i++) {
			if (Math.abs(check - a[i]) > 1) {
				check = a[i];
				if (i - start > max) {
					max = i - start;
				}
				start = i;
			} else if (i == a.length - 1) {
				if (i - start + 1 > max) {
					max = i - start + 1;
				}
			}
		}

		return max;
	}

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		in.skip("\n");
		int[] a = new int[n];

		for (int i = 0; i < n; i++) {
			a[i] = in.nextInt();
		}
		System.out.println(pickingNumbers(a));
	}
}