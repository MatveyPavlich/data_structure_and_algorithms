#include <stdio.h>

int main(void)
{
        int t;
        scanf("%d", &t);
        long long n, k;
        while (t--) {
                scanf("%lld %lld", &n, &k);
                printf("%s\n", n % k % 2 == 0 ? "YES" : "NO");
        }
        return 0;
}
