import java.util.ArrayList;
import java.util.List;
import java.util.regex.Pattern;
import java.util.Scanner;

class Solution {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		Pattern pattern = Pattern.compile("[A-Za-z]*");
		List<String> lines = new ArrayList<String>();

		while(in.hasNext(pattern)) {
			lines.add(in.nextLine());
		}

		for (int i = 0; i < lines.size(); i++) {
			System.out.println((i + 1) + " " + lines.get(i));
		}
	}
}