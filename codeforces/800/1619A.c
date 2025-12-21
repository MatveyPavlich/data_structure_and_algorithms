#include <stdio.h>
#include <string.h>

int main(void)
{
        int t;
        scanf("%d", &t);
        while (t--) {
                char s[101];
                scanf("%s", s);
                int len = strlen(s);
                if (len % 2 != 0) printf("NO\n");
                else {
                        int len_half = len / 2;
                        int ok = 1;
                        for (int i = 0; i < len_half; i++)
                                if (s[i] != s[i+len_half]) {
                                        ok = 0;
                                        break;
                                };
                        printf("%s\n", ok == 1 ? "YES" : "NO");
                }
        }

        return 0;
}
