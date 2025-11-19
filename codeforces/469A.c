#include <stdio.h>

int main(void) {
        int n;
        scanf("%d", &n);

        int seen[101] = {0};

        int p, q, lvl;

        scanf("%d", &p);
        for (int i = 0; i < p; i++) {
                scanf("%d", &lvl);
                seen[lvl] = 1;
        }

        scanf("%d", &q);
        for (int i = 0; i < q; i++) {
                scanf("%d", &lvl);
                seen[lvl] = 1;
        }

        for (int i = 1; i <= n; i++) {
                if (!seen[i]) {
                        printf("Oh, my keyboard!\n");
                        return 0;
                }
        }

        printf("I become the guy.\n");
        return 0;
}
