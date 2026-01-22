#include <stdio.h>
#include <math.h>

int main(void)
{
        int t;
        scanf("%d", &t);

        while (t--) {
                long long n;
                scanf("%lld", &n);

                long long sum = 0;
                for (long long i = 0; i < n; i++) {
                        long long x;
                        scanf("%lld", &x);
                        sum += x;
                }

                long long k = (long long)(sqrtl(sum));
                if (k * k == sum)
                        printf("YES\n");
                else
                        printf("NO\n");
        }

        return 0;
}
