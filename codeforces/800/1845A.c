#include <stdio.h>

int main(void)
{
        int t, n, k, x;
        scanf("%d", &t);
        while (t--) {
                scanf("%d %d %d", &n, &k, &x);
                if (x != 1) {
                        printf("YES\n%d ", n);
                        for (int i = 0; i < n; i++)
                                printf("1 ");
                        putchar('\n');
                }
                else if (n % 2 == 0 && k > 1) {
                        printf("YES\n%d ", n / 2);
                        for (int i = 0; i < n / 2; i++)
                                printf("2 ");
                        putchar('\n');
                }
                else if (n % 2 == 1 && k >= 3) {
                        printf("YES\n%d ", n / 2);
                        printf("3 ");
                        for (int i = 0; i < n / 2 - 1; i++)
                                printf("2 ");
                        putchar('\n');
                }
                else 
                        printf("NO\n");
        }
        return 0;
}
