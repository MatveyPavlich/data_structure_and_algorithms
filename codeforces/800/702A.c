#include <stdio.h>

int main(void)
{
        long n;
        scanf("%ld", &n);
        long long cur, prev = 0;
        long count_curr = 0, max_count = 0;
        for (int i = 0; i < n; i++) {
                scanf("%lld", &cur);
                if (cur > prev)
                        count_curr++;
                else {
                        if (count_curr > max_count)
                                max_count = count_curr;
                        count_curr = 1;
                }
                prev = cur;
        }
        if (max_count < count_curr)
                max_count = count_curr;
        printf("%ld\n", max_count);
        return 0;
}
