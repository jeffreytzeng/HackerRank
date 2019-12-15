import java.util.Scanner;
import java.util.LinkedList;

/* Using LinkedList to implement queue and stack*/
public class Palindrome {
	private LinkedList<Character> q = new LinkedList<Character>();
	private LinkedList<Character> s = new LinkedList<Character>();

	void enqueueCharacter(char c) {
		q.add(c);
	}

	char dequeueCharacter() {
		return (char)q.removeFirst();
	}

	void pushCharacter(char c) {
		q.add(c);
	}

	char popCharacter() {
		return (char)q.removeLast();
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