import java.util.Scanner;

class Solution {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int q = in.nextInt();

        for (int i = 0; i < q; i++) {
            int a = in.nextInt();
            int b = in.nextInt();
            int n = in.nextInt();
            int result = 0;

            for (int j = 0; j < n; j++) {
                result = b * (int)Math.pow(2, j) + result;
                System.out.print(a + result + (j == n - 1 ? "\n" : " "));
            }
        }
    }
}