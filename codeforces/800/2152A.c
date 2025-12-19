#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
        return (*(int *)a) - (*(int *)b);
}

int main(void) {
        int t;
        scanf("%d", &t);

        while (t--) {
                int n;
                scanf("%d", &n);

                int a[105];
                for (int i = 0; i < n; i++) {
                        scanf("%d", &a[i]);
                }

                // Sort the array
                qsort(a, n, sizeof(int), cmp);

                // Count distinct values
                int distinct = 1;
                for (int i = 1; i < n; i++) {
                        if (a[i] != a[i - 1]) {
                                distinct++;
                        }
                }

                // Minimum operations
                int ans = 2 * distinct - 1;
                printf("%d\n", ans);
        }

        return 0;
}
