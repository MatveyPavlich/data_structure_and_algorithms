#include <stdio.h>

int main(void)
{
        int t;
        long long m, a, b, c;
        scanf("%d", &t);
        while (t--) {
                scanf("%lld %lld %lld %lld", &m, &a, &b, &c);
                long long row1 = a < m ? a : m;
                long long row2 = b < m ? b : m;

                long long remaining = 2*m - row1 - row2;
                long long flex = c < remaining ? c : remaining;

                printf("%lld\n", row1 + row2 + flex);
        }
        return 0;
}
