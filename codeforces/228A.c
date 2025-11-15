#include <stdio.h>

int main(void) {
        long long s1, s2, s3, s4;
        scanf("%lld %lld %lld %lld", &s1, &s2, &s3, &s4);

        int distinct = 1;

        if (s2 != s1) distinct++;
        if (s3 != s1 && s3 != s2) distinct++;
        if (s4 != s1 && s4 != s2 && s4 != s3) distinct++;

        int to_buy = 4 - distinct;
        printf("%d\n", to_buy);

        return 0;
}
