#include <stdio.h>
#include <stdlib.h>

int main(void)
{
        int t;
        scanf("%d", &t);
        int x, k;
        while (t--) {
                scanf("%d %d", &x, &k);
                if (x % k != 0)
                        printf("1\n%d\n", x);
                int *arr = malloc(10 * sizeof(int));
                for (int i = 0; i < 10; i++)
                        arr[i] = 0;
                int pos = x;
                int step = 0;
                while (pos != 0) {
                        while (x % k == 0 && x <= pos) {
                                x--;
                                printf("%d\n", x);
                        }
                        pos -= x;
                        arr[step] = x;
                        step++;
                }
                printf("%d\n", step);
                for (int i = 0; i < step; i++)
                        printf("%d ", arr[i]);
                putchar('\n');
        }

        return 0;
}
