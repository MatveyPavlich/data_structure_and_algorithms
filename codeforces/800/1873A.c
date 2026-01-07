#include <stdio.h>

int main(void)
{
        int t;
        scanf("%d", &t);
        char s[4];
        while (t--) {
                scanf("%s", s);
                int ok = 1;
                if (s[0] == 'b' && s[1] == 'c' && s[2] == 'a')
                        ok = 0;
                if (s[0] == 'c' && s[1] == 'a' && s[2] == 'b')
                        ok = 0;
                printf("%s", ok ? "YES\n" : "NO\n");
        }

        return 0;
}
