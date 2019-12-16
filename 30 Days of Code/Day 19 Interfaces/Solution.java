import java.util.Scanner;
import java.util.Vector;

interface AdvancedArithmatic {
	int divisorSum(int n);
}

// Using Vector class to store and sum the divisor.
class Calculator implements AdvancedArithmatic {
	public int divisorSum(int n) {
		Vector<Integer> divisor = new Vector<Integer>();

		for (int i = 1; i <= n; i++) {
			if (n % i == 0) {
				divisor.add(i);
			}
		}

		int sum = 0;
		for (Integer i : divisor) {
			sum += i;
		}

		return sum;
	}
}

public class Solution {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int num = input.nextInt();

		AdvancedArithmatic cal = new Calculator();
		System.out.println("I implemented: " + cal.getClass().getInterfaces()[0].getName());
		System.out.println(cal.divisorSum(num));
	}
}
