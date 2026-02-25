#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
        int t;
        scanf("%d", &t);

        while (t--) {
                char s[10];
                scanf("%s", s);

                int len = strlen(s);

                if (len < 3) {
                        printf("NO\n");
                        continue;
                }

                // must start with "10"
                if (s[0] != '1' || s[1] != '0') {
                        printf("NO\n");
                        continue;
                }

                // no leading zero in exponent
                if (s[2] == '0') {
                        printf("NO\n");
                        continue;
                }

                int exponent = atoi(s + 2);

                if (exponent >= 2)
                        printf("YES\n");
                else
                        printf("NO\n");
        }

        return 0;
}
