import java.util.*;

public class Email {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int names = input.nextInt();
		input.skip("\n");
		ArrayList<String> arr = new ArrayList<>();

		for (int name = 0; name < names; name++) {
			String email = input.nextLine();
			Pattern gmail = Pattern.compile("@gmail.com");
			Matcher match = gmail.matcher(email);

			if (match.find()) {
				arr.add(email.split(" ")[0]);
			}
		}

		Collections.sort(arr);

		for (String name : arr) {
			System.out.println(name);
		}
	}
}
			
			