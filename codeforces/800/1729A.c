#include <stdio.h>
#include <stdlib.h>

int main(void)
{
        int t;
        scanf("%d", &t);
        long long a, b, c;
        while (t--) {
                scanf("%lld %lld %lld", &a, &b, &c);
                long long first = abs(a);
                long long second = abs((c - b)) + abs(c);
                if (first == second)
                        printf("3\n");
                else if (first < second)
                        printf("1\n");
                else
                        printf("2\n");
        }
        return 0;
}
