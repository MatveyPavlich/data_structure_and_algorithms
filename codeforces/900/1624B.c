#include <stdio.h>
#include <string.h>

int main(void) 
{
        int t;
        scanf("%d", &t);
        char out[t][5];
        int a, b, c;
        for (int i = 0; i < t; i++) {
                int ok = 0;
                scanf("%d %d %d", &a, &b, &c);
                if ((2 * b - c) %a == 0 && 2 * b - c > 0)
                        ok = 1;
                else if (((a + c) / 2) % b == 0 && (a + c) % 2 == 0)
                        ok = 1;
                else if (2*b - a > 0 && (2*b - a) % c == 0)
                        ok = 1;
                
                strcpy(out[i], (ok ? "YES\n" : "NO\n"));
        }

        for (int i = 0; i < t; i++)
                printf("%s", out[i]);

        return 0;
}
