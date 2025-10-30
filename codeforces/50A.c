#include <stdio.h>

int main(void)
{
        int m,n;
        scanf("%d %d", &m, &n);
        int pieces = m * n / 2;
        printf("%d\n", pieces);
        return 0;
}
