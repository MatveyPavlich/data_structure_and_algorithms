#include <stdio.h>

int main(void)
{
        int x;
        scanf("%d", &x);
        int count = 0;
        int steps[] = {5, 4, 3, 2, 1};

        for(size_t i = 0; i < sizeof(steps) / sizeof(int); i++) {
                count += x / steps[i];
                x = x % steps[i];
                if (x == 0) {
                        printf("%d\n", count);
                        return 0;
                }
        }

        return 0;
}
