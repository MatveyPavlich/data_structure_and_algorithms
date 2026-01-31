#include <stdio.h>

int main(void)
{
        int t;
        scanf("%d", &t);

        while (t--) {
                int x, y;
                int min_x = 100000, max_x = -100000;

                for (int i = 0; i < 4; i++) {
                        scanf("%d %d", &x, &y);
                        if (x < min_x) min_x = x;
                        if (x > max_x) max_x = x;
                }

                int side = max_x - min_x;
                printf("%d\n", side * side);
        }

        return 0;
}
