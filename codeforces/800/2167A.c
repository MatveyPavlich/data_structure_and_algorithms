#include <stdio.h>

int main(void)
{
        int t;
        scanf("%d", &t);
        int a, b, c, d;

        while (t--) {
                scanf("%d %d %d %d", &a, &b, &c, &d);
                if (a == b && b == c && c == d)
                        printf("YES\n");
                else
                        printf("NO\n");
        }
        return 0;
}
