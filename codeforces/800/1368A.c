#include <stdio.h>

int main(void)
{
        int t;
        scanf("%d", &t);
        long long a, b, n;
        while (t--) {
                scanf("%lld %lld %lld", &a, &b, &n);
                int count = 0;
                while (n >= a && n >= b) {
                        if (a > b)
                                b += a;
                        else
                                a += b;
                        count++;
                        // printf("a = %lld; b = %lld; n = %lld\n", a, b, n);
                }
                printf("%d\n", count);
        }
        return 0;
}
