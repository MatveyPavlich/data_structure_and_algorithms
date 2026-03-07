#include <stdio.h>

int main(void)
{
        int t;
        scanf("%d", &t);

        while (t--) {
                int n;
                scanf("%d", &n);

                int pile1 = 0, pile2 = 0;

                // largest coin
                pile1 += 1 << n;

                // smallest coins
                for (int i = 1; i < n/2; i++)
                        pile1 += 1 << i;

                // middle coins
                for (int i = n/2; i < n; i++)
                        pile2 += 1 << i;

                int diff = pile1 - pile2;
                if (diff < 0) diff = -diff;

                printf("%d\n", diff);
        }

        return 0;
}
