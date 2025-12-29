#include <stdio.h>

int main(void)
{
        int n;
        scanf("%d", &n);
        int max = 0, min = 0, out = 0;
        int temp;
        scanf("%d", &max);
        min = max;
        for (int i = 1; i < n; i++) {
                scanf("%d", &temp);
                if (max < temp) {
                        max = temp;
                        out++;
                }
                else if (min > temp) {
                        min = temp;
                        out++;
                }
        }
        printf("%d\n", out);
                
        return 0;
}
