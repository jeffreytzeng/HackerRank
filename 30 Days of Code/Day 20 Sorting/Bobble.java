import java.util.Scanner;

class Bobble {
	public static int BobleSort(int[] arr) {
		int swap_times = 0;

		for (int i = 1; i < arr.length; i++) {
			for (int j = 0; j < arr.length-i; j++) {
				if (arr[j] > arr[j+1]) {
					int temp = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = temp;
					swap_times++;
				}
			}
		}
		return swap_times;
	}

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int n = input.nextInt();
		int[] array = new int[n];

		for (int i = 0; i < n; i++) {
			array[i] = input.nextInt();
		}

		int swap_times = BobleSort(array);
		System.out.println("Array is sorted in " + swap_times + " swaps.");
		System.out.println("First Element: " + array[0]);
		System.out.println("Last Element: " + array[array.length - 1]);
	}
}