#include <stdio.h>

int main(void)
{
        int cubes, req = 1, n = 1;
        scanf("%d", &cubes);
        while (req <= cubes) {
                n++;
                req = n * (n + 1) * (n + 2) / 6; 
        } 
        printf("%d\n", n - 1);

        return 0;
}
