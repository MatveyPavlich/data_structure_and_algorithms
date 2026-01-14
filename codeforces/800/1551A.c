#include <stdio.h>

int main(void)
{
        int t;
        scanf("%d", &t);
        long long n, c1, c2;
        while (t--) {
                scanf("%lld", &n);
                long long quot = n / 3;
                c1 = c2 = quot;
                int rem = n % 3;
                if (rem == 2)
                        c2++;
                if (rem == 1)
                        c1++;
                printf("%lld %lld\n", c1, c2);
        }
        return 0;
}
