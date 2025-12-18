#include <stdio.h>

int main(void)
{
        int t;
        scanf("%d", &t);
        int x, y, z;
        while (t--) {
                scanf("%d %d %d", &x, &y, &z);
                if ((x&y&~z) == 0 &&
                    (y&z&~x) == 0 &&
                    (x&z&~y) == 0 )
                        printf("YES\n");
                else
                        printf("NO\n");
        }
        return 0;
}
