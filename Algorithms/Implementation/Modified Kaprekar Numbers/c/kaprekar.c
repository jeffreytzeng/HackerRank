#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int digits(long long number) {
	int count = 0;
	while (number != 0) {
		number /= 10;
		count++;
	}
	return count;
}
char *substr(char *src, char *sub, int from, int end) {
	int size = end-from+1;
	if (size != 0) {
		strncpy(sub, src+from, size);
		sub[end] = '\0';
	}
	return sub;
}

void kaprekarNumbers(int p, int q) {
	int k_capacity = 30;
    int k_size = 0;
    int *kaprekar = (int*)malloc(sizeof(int) * k_capacity);

    if (kaprekar == NULL) {
        printf("Memory allocation fail: kaprekar\n");
        return;
    }

    for (int i = p; i <= q; i++) {
        int i_size = digits(q);
        char *istr = (char*)malloc(i_size * sizeof(char));

        if (istr == NULL) {
            printf("Memory allocation fail: istr\n");
            break;
        }
        sprintf(istr, "%d", i);

        long long square = pow(i, 2);
        int str_size = digits(square);
        char *qstr = (char*)malloc(str_size * sizeof(char));

        if (qstr == NULL) {
            printf("Memory allocation fail: qstr\n");
            break;
        }
        sprintf(qstr, "%llu", square);

        int right_size = strlen(istr);
        char *right = (char*)malloc(sizeof(char)*right_size);

        if (right == NULL) {
            printf("Memory allocation fail: right\n");
            break;
        }
        substr(qstr, right, strlen(qstr)-right_size, strlen(qstr));

        int left_size = strlen(qstr) - right_size;		// At least stores 2 char: {'0', '\0'}
        char *left = (char*)malloc(sizeof(char)*left_size);

		if (left == NULL) {
			printf("Memory allocation fail: left\n");
		}

        if (left_size > 0) {
            substr(qstr, left, 0, left_size);
        } else {
			left_size = 1;
            substr("0", left, 0, left_size);
        }
            
        int right_number = 0;
        sscanf(right, "%d", &right_number);
        int left_number = 0;
        sscanf(left, "%d", &left_number);
        int sum = left_number + right_number;

        if (sum == i) {
			if (k_size+1 > k_capacity) {
				k_capacity *= 2;
				realloc(kaprekar, k_capacity);
			}
			kaprekar[k_size++] = i;

			if (kaprekar == NULL) {
				printf("Reallocating Memory kaprekar failed!\n");
			}
        }

        free(istr);
        free(qstr);
        free(right);
        free(left);
    }

    if (k_size == 0) {
        printf("INVALID RANGE");
    } else {
        for (int i = 0; i < k_size; i++) {
            i == k_size-1 ? printf("%d", kaprekar[i]) : printf("%d ", kaprekar[i]);
        }
    }

    free(kaprekar);
}

int main()
{
    int p = 0, q = 0;
    scanf("%d\n%d", &p, &q);

    kaprekarNumbers(p, q);

    return 0;
}