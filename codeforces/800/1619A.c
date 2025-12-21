#include <stdio.h>
#include <string.h>

int main(void)
{
        int t;
        scanf("%d", &t);
        while (t--) {
                char s[101];
                scanf("%s", s);
                long len = strlen(s);
                int count = 0;
                if (len % 2 != 0) printf("NO\n");
                else {
                        long len_half = len / 2;
                        for (int i = 0; i < len_half; i++)
                                if (s[i] == s[i+len_half]) count++;
                        printf("%s\n", count == len_half ? "YES" : "NO");
                }
        }

        return 0;
}
