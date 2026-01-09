#include <stdio.h>

int main(void)
{
        int t;
        scanf("%d", &t);
        long long a, b, c;
        while (t--) {
                scanf("%lld %lld %lld", &a, &b, &c);
                if (a + c == b + c)
                        printf((a + b + c) % 2 != 0 ? "First\n" : "Second\n");
                else if (a + c > b + c)
                        printf("First\n");
                else
                        printf("Second\n");
        }
        return 0;
}
