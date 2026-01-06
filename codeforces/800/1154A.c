#include <stdio.h>

int main(void)
{
        long long x[4];
        scanf("%lld %lld %lld %lld", &x[0], &x[1], &x[2], &x[3]);
        /* a + b + c will be the biggest one => use bubble sort to get 
         * positive integers in the ascending order.
         */
        for (int i = 0; i < 4; i++) {
                for (int j = i + 1; j < 4; j++) {
                        if (x[i] > x[j]) {
                                long long tmp = x[i];
                                x[i] = x[j];
                                x[j] = tmp;
                        }
                }
        }

        long long a = x[3] - x[2];
        long long b = x[3] - x[1];
        long long c = x[3] - x[0];

        printf("%lld %lld %lld\n", a, b, c);

        return 0;
}
