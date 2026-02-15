#include <stdio.h>

int main(void)
{
        int t;
        scanf("%d", &t);
        int n, x;
        while (t--) {
                scanf("%d %d", &x, &n);
                if (n % 2 == 0)
                        printf("0\n");
                else
                        printf("%d\n", x);
        }
        return 0;
}
