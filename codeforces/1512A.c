#include <stdio.h>

int main(void) {
        int t;
        scanf("%d", &t);

        int results[t];

        for (int tc = 0; tc < t; tc++) {
                int n;
                scanf("%d", &n);

                int a[n];
                for (int i = 0; i < n; i++)
                        scanf("%d", &a[i]);

                int majority;

                if (a[0] == a[1] || a[0] == a[2])
                        majority = a[0];
                else
                        majority = a[1];

                for (int i = 0; i < n; i++) {
                        if (a[i] != majority) {
                                results[tc] = i + 1;
                                break;
                        }
                }
        }

        for (int i = 0; i < t; i++) {
                printf("%d\n", results[i]);
        }

        return 0;
}
