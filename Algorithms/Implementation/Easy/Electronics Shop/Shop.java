import java.util.Arrays;
import java.util.Scanner;

class Shop {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int[] bnm = new int[3];

		for (int i = 0; i < 3; i++) {
			bnm[i] = in.nextInt();
		}

		in.skip("\n");
		int[] keyboard = Arrays.asList(in.nextLine().split(" ")).stream().mapToInt(Integer::parseInt).toArray();
		Arrays.sort(keyboard);
		int[] usb = Arrays.asList(in.nextLine().split(" ")).stream().mapToInt(Integer::parseInt).toArray();
		Arrays.sort(usb);
		int max = -1;

		for (int i = keyboard.length - 1, j = 0; i >= 0; i--) {
			for (; j < usb.length; j++) {
				if (keyboard[i] + usb[j] > bnm[0]) break;
				if (keyboard[i] + usb[j] > max) {
					max = keyboard[i] + usb[j];
				}
			}
		}

		System.out.println(max);
	}
}