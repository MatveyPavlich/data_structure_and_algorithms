#include <stdio.h>

int main(void)
{
        int t, n;
        scanf("%d", &t);
        while (t--) {
                scanf("%d", &n);
                for (int row = 0; row < 2 * n; row++) {
                        int pattern = (row / 2) % 2;
                        for (int col = 0; col < n; col++) {
                                if (!pattern)
                                        printf("%s", col % 2 == 0 ? "##" : "..");
                                else
                                        printf("%s", col % 2 == 1 ? "##" : "..");
                        }
                        putchar('\n');
                }
        }
        return 0;
}
