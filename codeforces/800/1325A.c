#include <stdio.h>

int main(void)
{
        int t;
        scanf("%d", &t);
        while (t--) {
                long long x;
                scanf("%lld", &x);
                printf("%lld 1\n", x - 1);
        }
        return 0;
}
