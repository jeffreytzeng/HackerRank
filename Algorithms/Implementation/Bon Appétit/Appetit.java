import java.util.Scanner;

class Appetit {
	public static void main(String[] argc) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int k = in.nextInt();

        Integer[] bill = new Integer[n];
        in.skip("\n");
        for (int i = 0; i < n; i++) {
            bill[i] = in.nextInt();
        }
        in.skip("\n");
        int b = in.nextInt();

        bill[k] = 0;

        int sum = 0;
        for (Integer p : bill) {
            sum += p;
        }

        System.out.println(b == sum / 2 ? "Bon Appetit" : b - sum / 2);
	}
}