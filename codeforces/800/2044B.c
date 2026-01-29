#include <stdio.h>
#include <string.h>

int main(void)
{
        int t;
        scanf("%d", &t);
        char s[101];
        while (t--) {
                scanf("%s", s);
                int len = strlen(s);
                char out[len + 1];
                out[len] = '\0';
                char curr;
                for (int i = 0; s[i] != '\0'; i++) {
                        if (s[i] == 'p')
                                curr = 'q';
                        else if (s[i] == 'q')
                                curr = 'p';
                        else
                                curr = 'w';
                        out[len - i - 1] = curr;
                }
                printf("%s\n", out);
        }
        return 0;
}
