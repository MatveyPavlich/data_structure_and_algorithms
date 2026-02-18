#include <stdio.h>

int main(void)
{
        int t;
        long long m, a, b, c;
        scanf("%d", &t);
        while (t--) {
                scanf("%lld %lld %lld %lld", &m, &a, &b, &c);
                long long seated = 0, first = m, second = m;
                if (a <= m) {
                        seated += a;
                        first -= a;
                }
                else {
                        seated += m;
                        first = 0;
                }

                if (b <= m) {
                        seated += b;
                        second -= b;
                }
                else {
                        seated += m;
                        second = 0;
                }

                if (first + second > 0)
                        seated += (first + second) >= c ? c : (first + second);
                printf("%lld\n", seated);
        }
        return 0;
}
