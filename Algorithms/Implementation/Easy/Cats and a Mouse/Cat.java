import java.util.Scanner;

class Cat {
	static String catAndMouse(int x, int y, int z) {
		int catA = Math.abs(x - z);
		int catB = Math.abs(y - z);

		if (catA == catB) {
			return "Mouse C";
		} else {
			return (catA < catB ? "Cat A" : "Cat B");
		}
	}

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int q = in.nextInt();

		for (int i = 0; i < q; i++) {
			in.skip("\n");
			int x = in.nextInt();
			int y = in.nextInt();
			int z = in.nextInt();

			System.out.println(catAndMouse(x, y, z));
		}
	}
}