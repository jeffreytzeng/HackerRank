import java.util.Scanner;

class And {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();

        for (int i = 0; i < t; i++) {
            input.skip("\n");
            int n = input.nextInt();
            int k = input.nextInt();
            System.out.println(((k-1)|k) <= n ? k-1 : k-2);
        }
    }
}