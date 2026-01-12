#include <stdio.h>

int main(void)
{
        int t;
        scanf("%d", &t);
        char s[4];
        while (t--) {
                scanf("%s", s);
                int out = (s[2] - '0') + (s[0] - '0');
                printf("%d\n", out);
        }
        return 0;
}
