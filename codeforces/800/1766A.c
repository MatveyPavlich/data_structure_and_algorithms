#include <stdio.h>

int main(void)
{
        int t;
        scanf("%d", &t);

        while (t--) {
                int n;
                scanf("%d", &n);

                int len = 0;
                int tmp = n;
                while (tmp > 0) {
                        len++;
                        tmp /= 10;
                }

                // first digit
                tmp = n;
                while (tmp >= 10) tmp /= 10;
                int first = tmp;

                int ans = 9 * (len - 1) + first;
                printf("%d\n", ans);
        }

        return 0;
}
