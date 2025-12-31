#include <stdio.h>

int main(void)
{
        int t;
        scanf("%d", &t);
        int n;
        while (t--) {
                scanf("%d", &n);
                int a[n];
                for (int i = 0; i < n; i++) scanf("%d", &a[i]);
                int min = a[0];
                int min_index = 0;
                for (int i = 1; i < n; i++)
                        if (a[i] < min) {
                                min = a[i];
                                min_index = i;
                        }

                // printf("Min: %d (pos = %d)\n", min, min_index);
                a[min_index]++;
                int out = a[0];
                for (int i = 1; i < n; i++) out *= a[i];
                printf("%d\n", out);
        }
        return 0;
}
