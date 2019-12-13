import java.util.Scanner;

class Difference {
	private int[] elements;
	public int maximumDifference;

	public Difference(int[] numbers) {
		elements = numbers;
		maximumDifference = 0;
	}

	void computeDifference() {
		for (int i = 0; i < elements.length-1; i++) {
			for (int j = i+1; j < elements.length; j++) {
				int diff = Math.abs(elements[i]-elements[j]);
				if (diff > maximumDifference) {
					maximumDifference = diff;
				}
			}
		}
	}
}

public class Solution {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int[] a = new int[n];
		for (int i = 0; i < n; i++) {
			a[i] = sc.nextInt();
		}
		sc.close();

		Difference difference = new Difference(a);

		difference.computeDifference();

		System.out.print(difference.maximumDifference);
	}
}