#include <stdio.h>

int main(void)
{
        int t;
        scanf("%d", &t);
        long long n, k;
        while (t--) {
                scanf("%lld %lld", &n, &k);
                if (k % 2 == 0)
                        printf("%s\n", n % 2 == 0 ? "YES" : "NO");
                else
                        printf("%s\n", n >= k ? "YES" : "NO");
        }
        return 0;
}
