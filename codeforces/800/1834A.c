#include <stdio.h>

int main(void)
{
        int t, n;
        scanf("%d", &t);
        while (t--) {
                scanf("%d", &n);
                int temp = 0;
                int neg = 0;
                for (int i = 0; i < n; i++) {
                        scanf("%d", &temp);
                        if (temp == -1)
                                neg++;
                }

                int ops = 0;
                if (neg > n / 2) {
                        ops += neg - n / 2;
                        neg = n / 2;
                }
                if (neg % 2 != 0)
                        ops++;
                printf("%d\n", ops);
        }

        return 0;
}
