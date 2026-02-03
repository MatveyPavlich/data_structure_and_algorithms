#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
        int t;
        scanf("%d", &t);

        while (t--) {
                int n, m;
                scanf("%d %d", &n, &m);

                char *x = malloc(n + 1);
                char s[m + 1];
                scanf("%s %s", x, s);

                int ans = -1;

                for (int ops = 0; ops <= 10; ops++) {
                        if (strstr(x, s)) {
                                ans = ops;
                                break;
                        }

                        int len = (int)strlen(x);
                        char *tmp = realloc(x, 2 * len + 1);
                        if (!tmp) {
                                free(x);
                                return 1;
                        }
                        x = tmp;

                        memcpy(x + len, x, len);
                        x[2 * len] = '\0';
                }

                printf("%d\n", ans);
                free(x);
        }

        return 0;
}
