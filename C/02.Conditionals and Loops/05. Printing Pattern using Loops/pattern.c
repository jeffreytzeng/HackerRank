#include <stdio.h>

int main() 
{

    int n;
    scanf("%d", &n);

    for (int row = 0, r = 0; row < n * 2 - 1; row++, r += row < n ? 1 : -1) {
        for (int i = 0; i < r; i++) {
            printf("%d ", n - i);
        }
        for (int col = 0; col < n * 2 - 1 - r * 2; col++) {
            printf("%d ", n - r);
        }
        for (int i = 0; i < r; i++) {
            printf("%d ", n - r + i + 1);
        }
        printf("\n");
    }

    return 0;
}