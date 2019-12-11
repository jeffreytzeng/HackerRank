#include <stdio.h>
#include <stdlib.h>

int Compare(const void *a, const void *b) {
	return *(int*)a - *(int*)b;
}

int main()
{
	int row = 6, col = 6;
	int array[row][col];

	for (int r = 0; r < row; r++) {
		for (int c = 0; c < col; c++) {
			scanf("%d", &array[r][c]);
		}
	}

	int glass_row = 4, glass_col = 4;
	int glass_size = glass_row * glass_col;
	int hourglass[glass_size];

	for (int r = 0; r < glass_row; r++) {
		for (int c = 0; c < glass_col; c++) {
			int left = 0, right = 0;
			hourglass[r + c * glass_row] = 0;
//			printf("\t(r, c)=(%d, %d)(%d)\n", r, c, r+c*glass_row);
			for (int igr = 0+c; igr < 3+c; igr++) {
				for (int igc = 0+r; igc < 3+r; igc++) {
					hourglass[r + c*glass_row] += array[igr][igc];

					if (igr == c+1) {
						left = igc == r ? array[igr][igc] : left;
						right = igc == r+2 ? array[igr][igc] : right;
//						if (igc == r) printf("left=");
//						if (igc == r+2) printf("right=");
					}
//					printf("(%d, %d) ", igr, igc);
				}
//				printf("\n");
			}
//			printf("\n");
			hourglass[r + c*glass_row] -= left + right;
		}
	}

	qsort(hourglass, glass_size, sizeof(int), Compare);
	printf("%d", hourglass[glass_size-1]);
	return 0;
}