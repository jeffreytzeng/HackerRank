import java.util.Scanner;

class Valleys {
	static int CountValleys(int n, String s) {
		int valleys = 0;
		int previous_level = 0;
		int current_level = 0;

		for (int i = 0; i < n; i++) {
			previous_level = current_level;
			current_level += s.charAt(i) == 'D' ? -1 : 1;

			if ((previous_level == 0) && (current_level == -1)) {
				valleys++;
			}
		}

		return valleys;
	}

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		in.skip("\n");
		String s = in.nextLine();
		System.out.println(CountValleys(n, s));
	}
}