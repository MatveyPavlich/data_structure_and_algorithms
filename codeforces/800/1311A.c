#include <stdio.h>

int main(void)
{
        int t;
        scanf("%d", &t);
        long long a, b;
        while (t--) {
                scanf("%lld %lld", &a, &b);
                if (a == b)
                        printf("0\n");
                else if (a < b)
                        printf("%d\n", (b - a) % 2 == 1 ? 1 : 2);
                else
                        printf("%d\n", (a - b) % 2 == 0 ? 1 : 2);
        }
        return 0;
}
