#include <stdio.h>

int main(void)
{
        int t;
        scanf("%d", &t);
        int a, b, c;
        while (t--) {
                scanf("%d %d", &a, &b);
                c = a;
                printf("%d\n", ((c - a) + (b - c)));
                
        }
        return 0;
}
