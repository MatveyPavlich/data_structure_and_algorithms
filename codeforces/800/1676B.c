#include <stdio.h>

int main(void)
{
        int t;
        scanf("%d", &t);
        int n;
        while (t--) {
                scanf("%d", &n);
                long a[n];
                for (int i = 0; i < n; i++)
                        scanf("%ld", &a[i]);

                int min = a[0];
                for (int i = 1; i < n; i++) {
                        if (min > a[i])
                                min = a[i];
                }

                long out = 0;
                for (int i = 0; i < n; i++)
                        out += (a[i] - min);

                printf("%ld\n", out);
        }

        return 0;
}
