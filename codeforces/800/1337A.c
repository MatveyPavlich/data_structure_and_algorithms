#include <stdio.h>

int main(void)
{
        int t;
        scanf("%d", &t);

        while (t--) {
                long long a, b, c, d;
                scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

                printf("%lld %lld %lld\n", b, c, c);
        }

        return 0;
}
