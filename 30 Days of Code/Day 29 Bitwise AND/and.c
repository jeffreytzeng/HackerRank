#include <stdio.h>

int main()
{
    int t = 0;
    scanf("%d", &t);
    getchar();

    for (int i = 0; i < t; i++) {
        int n = 0, k = 0;
        scanf("%d %d", &n, &k);

        ((k-1)|k) <= n ? printf("%d\n", k-1) : printf("%d\n", k-2);
    }
    return 0;
}
