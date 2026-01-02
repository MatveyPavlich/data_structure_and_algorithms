#include <stdio.h>
#include <math.h>

int main(void)
{
        int t;
        scanf("%d", &t);
        double n;
        while (t--) {
                scanf("%lf", &n);
                long long ans = (long long)(ceil(n / 2.0) - 1);
                if (n > 2)
                        printf("%lld\n", ans);
                else
                        printf("%d\n", 0);
        }
        return 0;
}
