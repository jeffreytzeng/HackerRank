import java.util.Scanner;

class Sort {
	static void InsertionSort(int[] arr) {
		for (int i = 1; i < arr.length; i++) {
			int key = arr[i];
			int j = i - 1;
			
			while (j >= 0 && key <= arr[j]) {
				arr[j+1] = arr[j];
				j--;
			}
			arr[j+1] = key;
		}
	}
	
	public static void main(String[] argv) {
		Scanner input = new Scanner(System.in);
		int n = input.nextInt();
		int[] numbers = new int[n];
		
		for (int i = 0; i < n; i++) {
			input.skip("\n");
			numbers[i] = input.nextInt();
		}
		
		InsertionSort(numbers);
		
		for (int i = 0; i < n; i++) {
			System.out.println(numbers[i]);
		}
	}
}