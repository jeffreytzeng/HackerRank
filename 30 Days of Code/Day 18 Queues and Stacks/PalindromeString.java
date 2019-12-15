import java.util.Scanner;

/* Using String to implement queue and stack*/
public class PalindromeString {
	private String q = new String();
	private String s = new String();

	void enqueueCharacter(Character c) {
		q += c.toString();
	}

	char dequeueCharacter() {
		char c = q.charAt(0);
		q = q.substring(1);
		return c;
	}

	void pushCharacter(Character c) {
		s += c.toString();
	}

	char popCharacter() {
		char c = s.charAt(s.length()-1);
		s = s.substring(0, s.length()-1);
		return c;
	}

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		String input = scan.nextLine();
		scan.close();

		char[] s = input.toCharArray();

		Palindrome p = new Palindrome();

		for (char c : s) {
			p.pushCharacter(c);
			p.enqueueCharacter(c);
		}

		boolean isPalindrome = true;
		for (int i = 0; i < s.length/2; i++) {
			if (p.popCharacter() != p.dequeueCharacter()) {
				isPalindrome = false;
				break;
			}
		}

		System.out.println("The word, " + input + ", is "
						   + ((!isPalindrome) ? "not a palindrome." : "a palindrome."));
	}
}