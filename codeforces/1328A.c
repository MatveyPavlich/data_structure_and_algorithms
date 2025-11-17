#include <stdio.h>

int main(void) {
        int t;
        scanf("%d", &t);
        long a, b;
        long ans[t];
        for (int i = 0; i < t; i++) {
                scanf("%ld %ld", &a, &b);
                if (a % b == 0)
                        ans[i] = 0;
                else
                        ans[i] = b - (a % b);
        }

        for (int j = 0; j < t; j++)
                printf("%ld\n", ans[j]);

        return 0;
}
