#include <stdio.h>

int main(void)
{
        int t;
        scanf("%d", &t);
        int n, a, b;
        while (t--) {
                scanf("%d %d %d", &n, &a, &b);
                if (2 * a > b)
                        printf("%d\n", n % 2 == 0 ? (n / 2) * b : (n / 2) * b + a);
                else
                        printf("%d\n", n * a);
        }
        return 0;
}
