import java.util.Arrays;
import java.util.Scanner;

class Sticks {
	static int[] cutTheSticks(int[] arr) {
		Arrays.sort(arr);
		int[] result = {arr.length};

		for (int i = 0; i < arr.length - 1; i++) {
			if (arr[i] != arr[i+1]) {
				int[] temp = new int[result.length + 1];

				for (int j = 0; j < result.length; j++) {
					temp[j] = result[j];
				}
				temp[result.length] = arr.length - (i + 1);
				result = temp;
			}
		}

		return result;
	}

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		int[] arr = new int[n];
		in.skip("\n");

		for (int i = 0; i < n; i++) {
			arr[i] = in.nextInt();
		}

		int[] result = cutTheSticks(arr);

		for (int i = 0; i < result.length; i++) {
			System.out.println(result[i]);
		}
	}
}