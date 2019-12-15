import java.util.Scanner;

class NegativeValueException extends Exception {
    @Override
    public String getMessage() {
        return "n and p should be non-negative";
    }
}

class Calculator {
    int power(int n, int p) throws NegativeValueException {
        if (n < 0 || p < 0) {
            throw new NegativeValueException();
        } else {
            int result = 1;

            for (int i = 0; i < p; i++) {
                result *= n;
            }
            return result;
        }
    }
}

class Solution{

    public static void main(String[] args) {
    
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while (t-- > 0) {
        
            int n = in.nextInt();
            int p = in.nextInt();
            Calculator myCalculator = new Calculator();
            try {
                int ans = myCalculator.power(n, p);
                System.out.println(ans);
            }
            catch (Exception e) {
                System.out.println(e.getMessage());
            }
        }
        in.close();
    }
}