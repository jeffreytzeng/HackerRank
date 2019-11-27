import java.util.Scanner;

public class MySolution {
    static void printArr(int[] arr) {
        for (int i = 0; i < arr.length; i++) {
            System.out.print(i == arr.length - 1 ? arr[i] : arr[i] + " ");
        }
    }

    static void sort(int[] arr) {
        for (int i = arr.length-1; i >= 0; i--) {
            int key = arr[i];
            int j = i - 1;

            while (j >= 0 && key <= arr[j]) {
                arr[j+1] = arr[j];
                j--;
                printArr(arr);
                System.out.println();
            }
            arr[j+1] = key;
        }
        printArr(arr);
    }

    public static void main(String[] argv) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        input.skip("\n");
        String[] str = input.nextLine().split(" ");
        int[] numbers = new int[n];

        for (int i = 0; i < n; i++) {
            numbers[i] = Integer.parseInt(str[i]);
        }

        sort(numbers);
    }
}
