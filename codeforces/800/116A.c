#include <stdio.h>

int main(void)
{
        int n;
        scanf("%d", &n);
        int max = 0;
        int temp = 0, exit, enter;
        for (int i = 0; i < n; i++) {
                scanf("%d %d", &exit, &enter);
                temp += (enter - exit);
                if (temp > max)
                        max = temp;
        }
        printf("%d\n", max);
        return 0;
}
