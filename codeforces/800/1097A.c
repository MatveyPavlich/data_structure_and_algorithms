#include <stdio.h>

int main(void)
{
        char table[3];
        char card[3];
        scanf("%s", table);
        int count = 0;
        for (int i = 0; i < 5; i++) {
                scanf("%s", card);
                if (table[0] == card[0] || table[1] == card[1]) {
                        printf("YES\n");
                        break;
                }
                count++;
        };
        if (count == 5)
                printf("NO\n");
        return 0;
}
