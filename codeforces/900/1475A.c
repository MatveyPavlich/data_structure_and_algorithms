#include <stdio.h>

int main(void)
{
        int t;
        scanf("%d", &t);
        /* Although long = 64 bit on x86_64 it can be 32-bits on other
         * machines => not portable, so change to long long
         */
        long long n;
        while (t--) {
                scanf("%lld", &n);
                while (n % 2 == 0 && n > 1)
                        n /= 2;
                printf("%s", n > 1 ? "YES\n" : "NO\n");
        }
        return 0;
}


