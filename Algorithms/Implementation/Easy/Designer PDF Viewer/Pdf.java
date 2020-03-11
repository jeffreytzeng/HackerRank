import java.util.Scanner;

class Pdf {
	static int designerPdfViewer(int[] h, String word) {
		int highest = 0;
		char[] ch = word.toCharArray();

		for (char c : ch) {
			if (h[c - 97] > highest) {
				highest = h[c - 97];
			}
		}

		return highest * word.length();
	}

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int[] heights = new int[26];

		for (int i = 0; i < 26; i++) {
			heights[i] = in.nextInt();
		}
		in.skip("\n");
		String word = in.nextLine();

		System.out.println(designerPdfViewer(heights, word));
	}
}