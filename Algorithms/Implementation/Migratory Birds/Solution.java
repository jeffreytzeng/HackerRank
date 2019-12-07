import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;


public class Solution {
	static int migratoryBirds(List<Integer> arr) {
		Collections.sort(arr);

		Integer[] repeat = {0, 0, 0, 0, 0};
		for (int i = 0; i < repeat.length; i++) {
			repeat[i] = Collections.frequency(arr, i+1);
		}

		int max = repeat[0];
		int most_common = 1;

		for (int i = 1; i < repeat.length; i++) {
			if (repeat[i] > max) {
				most_common = i+1;
				max = repeat[i];
			}
		}

		return most_common;
	}

	public static void main(String[] args) throws IOException {
		BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

		int arrCount = Integer.parseInt(bufferedReader.readLine().trim());
		List<Integer> arr = Stream.of(bufferedReader.readLine().replaceAll("\\s+$", "").split(" "))
							.map(Integer::parseInt).collect(toList());

		int result = migratoryBirds(arr);

		bufferedWriter.write(String.valueOf(result));
		bufferedWriter.newLine();

		bufferedReader.close();
		bufferedWriter.close();
	}
}