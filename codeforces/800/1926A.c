#include <stdio.h>

int main(void)
{
        int t;
        scanf("%d", &t);
        char s[6];
        while (t--) {
                scanf("%s", s);
                int a = 0, b = 0;
                for (int i = 0; i < 5; i++)
                        s[i] == 'A' ? a++ : b++;
                putchar(a > b ? 'A' : 'B');
                putchar('\n');
        }
        return 0;
}
