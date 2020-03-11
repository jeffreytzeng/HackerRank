package kaprekar2;

import java.math.BigInteger;
import java.util.Arrays;
import java.util.ArrayList;
import java.util.List;


class KaprekarNumber {
	private Integer[] kaprekar_numbers_;
	private int[] limits_;

	public KaprekarNumber(int[] limits) {
		limits_ = limits;
		FindNumbers();
	}

	private void FindNumbers() {
		kaprekar_numbers_ = new Integer[0];

		for (int i = limits_[0]; i <= limits_[1]; i++) {
			int d = Integer.toString(i).length();
			BigInteger ipow2 = new BigInteger(Integer.toString(i)).pow(2);
			String square = ipow2.toString();
			int l = square.length() > d ?
					Integer.parseInt(square.substring(0, square.length() - d)) : 0;
			int r = Integer.parseInt(square.substring(square.length() - d));

			if (l + r == i) {
				List<Integer> list = new ArrayList<>(Arrays.asList(kaprekar_numbers_));
				list.add(i);
				kaprekar_numbers_ = list.toArray(kaprekar_numbers_);
			}
		}
	}

	public void ShowNumbers() {
		if (kaprekar_numbers_.length > 0) {
			for (int i = 0; i < kaprekar_numbers_.length; i++) {
				System.out.print(i == kaprekar_numbers_.length - 1 ?
					kaprekar_numbers_[i] : kaprekar_numbers_[i] + " ");
			}
		} else {
			System.out.println("INVALID RANGE");
		}
	}
}