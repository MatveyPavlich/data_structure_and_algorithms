#include <stdio.h>
#include <stdlib.h>

int main(void)
{
        int n;
        scanf("%d", &n);
        int abs_min, temp;
        scanf("%d", &temp);
        abs_min = abs(temp);
        for (int i = 1; i < n; i++) {
                scanf("%d", &temp);
                if (abs(temp) < abs_min)
                        abs_min = abs(temp);
        }
        printf("%d\n", abs_min);

        return 0;
}
