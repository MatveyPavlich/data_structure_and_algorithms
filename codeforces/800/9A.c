#include <stdio.h>

int main(void)
{
        int y, w;
        scanf("%d %d", &y, &w);
        int max = y > w ? y : w;
        int num = 6 - max + 1;
        switch (num) {
                case 6: printf("1/1\n"); break;
                case 5: printf("5/6\n"); break;
                case 4: printf("2/3\n"); break;
                case 3: printf("1/2\n"); break;
                case 2: printf("1/3\n"); break;
                case 1: printf("1/6\n"); break;
        }
        return 0;
}
