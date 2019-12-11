import java.util.Arrays;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

class Hourglass {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int array_row = 6, array_col = 6;
		int[][] array = new int[array_row][array_col];

		for (int row = 0; row < array_row; row++) {
			for (int col = 0; col < array_col; col++) {
				array[row][col] = input.nextInt();
			}
		}

		int glass_row = 4, glass_col = 4;
		int[] hourglass = new int[glass_row*glass_col];

		for (int gr = 0; gr < glass_row; gr++) {
			for (int gc = 0; gc < glass_col; gc++) {
				int left = 0, right = 0;
				hourglass[gr+gc*glass_row] = 0;

//				System.out.println("\n\t(gc,gr)= (" + gc + "," + gr + "); (" + (gr+gc*4) + ")");
				for (int igr = gc+0; igr < gc+3; igr++) {
					for (int igc = gr+0; igc < gr+3; igc++) {
						hourglass[gr+gc*glass_row] += array[igr][igc];
//						System.out.print("(igr,igc)= (" + igr + "," + igc + ")");
						if (igr == gc+1 && igc == gr) {
							left = array[igr][igc];
//							System.out.print("left(igr,igc)= (" + igr + "," + igc + ")");
						} else if (igr == gc+1 && igc == gr+2) {
							right = array[igr][igc];
//							System.out.print("right(igr,igc)= (" + igr + "," + igc + ")");
						}
					}
//					System.out.println();
				}
				hourglass[gr+gc*glass_row] -= left + right;
			}
		}

//		System.out.println(Arrays.toString(hourglass));
		Arrays.sort(hourglass);
		System.out.println(hourglass[hourglass.length-1]);
	}
}
						