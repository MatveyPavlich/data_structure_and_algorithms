#include <stdio.h>

int main(void)
{
        int t;
        long n;
        scanf("%d", &t);
        while (t--) {
                scanf("%ld", &n);
                long long s[n];
                long long first = 0, first_pos, second = 0;
                for (long i = 0; i < n; i++) {
                        scanf("%lld", &s[i]);
                        if (first < s[i]) {
                                second = first;
                                first = s[i];
                                first_pos = i;

                        }
                        else if (second < s[i])
                                second = s[i];
                }

                for (long i = 0; i < n; i++)
                        printf("%lld ", i == first_pos ? first - second : s[i] - first);
                putchar('\n');
        }
        return 0;
}
