#include <stdio.h>

int main(void)
{
        int t;
        scanf("%d", &t);

        while (t--) {
                long long x, y, z;
                scanf("%lld %lld %lld", &x, &y, &z);

                long long M = x;
                if (y > M) M = y;
                if (z > M) M = z;

                int count = 0;
                if (x == M) count++;
                if (y == M) count++;
                if (z == M) count++;

                if (count < 2) {
                        printf("NO\n");
                        continue;
                }

                printf("YES\n");

                // Now construct a, b, c
                if (x == y && y == M) {
                        // x = max(a,b), y = max(a,c)
                        // So a = M, b = z, c = z
                        printf("%lld %lld %lld\n", M, z, z);
                }
                else if (x == z && z == M) {
                        // x = max(a,b), z = max(b,c)
                        // So b = M, a = y, c = y
                        printf("%lld %lld %lld\n", y, M, y);
                }
                else {
                        // y == z == M
                        // y = max(a,c), z = max(b,c)
                        // So c = M, a = x, b = x
                        printf("%lld %lld %lld\n", x, x, M);
                }
        }

        return 0;
}
