#include <stdio.h>

int main(void)
{
        int t;
        scanf("%d", &t);
        int h, m;
        while (t--) {
                scanf("%d %d", &h, &m);
                int min;
                if (m > 0)
                        min = (24 - h - 1) * 60 + (60 - m);
                else
                        min = (24 - h) * 60;
                printf("%d\n", min);
        }
        return 0;
}
