#include <stdio.h>

int main(void)
{
        int t;
        scanf("%d", &t);

        while (t--) {
                int a, b;
                scanf("%d %d", &a, &b);

                // normalize so a <= b
                if (a > b) {
                        int tmp = a;
                        a = b;
                        b = tmp;
                }

                int side1 = (2 * a > b) ? 2 * a : b;
                int side2 = (2 * b > a) ? 2 * b : a;

                int side = (side1 < side2) ? side1 : side2;
                printf("%d\n", side * side);
        }

        return 0;
}

/* Don't use areas here... */
/*
int main(void)
{
        int t;
        scanf("%d", &t);
        int a, b;
        while (t--) {
                scanf("%d %d", &a, &b);
                if (a == b)
                        printf("%d\n", 2 * a * 2 * a);
                else {
                        int area = a * b * 2;
                        int max = b > a ? b : a;
                        while ((max * max) < area)
                                max++;
                        printf("%d\n", (max * max));
                }
        }
        return 0;
}
*/
