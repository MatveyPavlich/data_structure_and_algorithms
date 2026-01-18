#include <stdio.h>

int main(void)
{
        int t;
        scanf("%d", &t);
        int x, n;
        while (t--) {
                scanf("%d %d", &n, &x);
                int floor = 0;
                if (n <= 2) {
                        floor = 1;
                } else {
                        n -= 2;
                        floor = 1 + (n / x);
                        floor = floor + ((n % x) != 0 ? 1 : 0);
                }
                printf("%d\n", floor);

        }
        return 0;
}
