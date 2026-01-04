#include <stdio.h>

int main(void)
{
        int t;
        scanf("%d", &t);
        char s1[4];
        char s2[4];
        char temp;
        while (t--) {
                scanf("%s %s", s1, s2);
                temp = s1[0];
                s1[0] = s2[0];
                s2[0] = temp;
                printf("%s %s\n", s1, s2);
        }

        return 0;
}
