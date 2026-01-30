#include <stdio.h>

int main(void)
{
        int t;
        scanf("%d", &t);

        while (t--) {
                int x;
                scanf("%d", &x);
                int min_digit = 9;
                while (x > 0) {
                        int d = x % 10;
                        if (d < min_digit)
                                min_digit = d;
                        x /= 10;
                }
                printf("%d\n", min_digit);
        }

        return 0;
}
