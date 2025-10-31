#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
        char s1[101], s2[101];
        scanf("%s", s1);
        scanf("%s", s2);

        for (int i = 0; s1[i]; i++) {
                s1[i] = tolower((unsigned char)s1[i]);
                s2[i] = tolower((unsigned char)s2[i]);
        }

        int cmp = strcmp(s1, s2);

        if (cmp < 0) printf("-1\n");
        else if (cmp > 0) printf("1\n");
        else printf("0\n");

        return 0;
}
