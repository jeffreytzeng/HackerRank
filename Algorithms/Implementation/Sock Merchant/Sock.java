import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

class Sock {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		in.skip("\n");
		int[] ar = new int[n];

		Set<Integer> color = new HashSet<>();
		int pairs = 0;

		for (int i = 0; i < n; i++) {
			ar[i] = in.nextInt();

			if (!color.add(ar[i])) {
				pairs++;
				color.remove(ar[i]);
			}
		}

		System.out.println(pairs);
	}
}
		