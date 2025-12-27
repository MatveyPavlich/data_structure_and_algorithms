#include <stdio.h>
#include <string.h>

int main(void)
{
        char d;
        char msg[101];

        const char *kbd = "qwertyuiopasdfghjkl;zxcvbnm,./";

        scanf(" %c", &d);
        scanf("%s", msg);

        for (int i = 0; msg[i] != '\0'; i++) {
                const char *p = strchr(kbd, msg[i]);
                if (d == 'R') putchar(*(p - 1));
                else putchar(*(p + 1));
        }

        putchar('\n');
        return 0;
}
