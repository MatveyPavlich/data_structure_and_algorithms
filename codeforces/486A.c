#include <stdio.h>

// If n = 10^15 then thats a lot of itterations...
int main(void) {
        long long n;
        scanf("%lld", &n);
        long long sum = 0;
        int multiplier = 1;
        for (long long i = 1; i <= n; i++) {
                sum += multiplier * i;
                multiplier *= -1;
        }
        printf("%lld\n", sum);
        return 0;
}
