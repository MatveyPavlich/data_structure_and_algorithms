#include <stdio.h>
#include <stdlib.h>

typedef struct {
        int value;
        int index;
} pair;

int cmp(const void *a, const void *b) {
        return ((pair*)a)->value - ((pair*)b)->value;
}

int main() {
        int t;
        scanf("%d", &t);

        while (t--) {
                int n;
                scanf("%d", &n);

                pair arr[105];
                int b[105];

                for (int i = 0; i < n; i++) {
                        scanf("%d", &arr[i].value);
                        arr[i].index = i;
                }

                qsort(arr, n, sizeof(pair), cmp);

                for (int i = 0; i < n; i++) {
                        b[arr[i].index] = n - i;
                }

                for (int i = 0; i < n; i++)
                        printf("%d ", b[i]);

                printf("\n");
        }

        return 0;
}
