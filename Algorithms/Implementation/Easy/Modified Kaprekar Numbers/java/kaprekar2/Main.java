package kaprekar2;

import java.util.Scanner;


public class Main {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int[] limits = new int[2];
		limits[0] = in.nextInt();
		limits[1] = in.nextInt();

		KaprekarNumber kaprekar = new KaprekarNumber(limits);
		kaprekar.ShowNumbers();
	}
}