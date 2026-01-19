#include <stdio.h>
#include <string.h>

int main(void)
{
        int t;
        scanf("%d", &t);
        char a[11];
        while (t--) {
                scanf("%s", a);
                char *end = strstr(a, "us\0");
                while (strlen(end) > 2)
                        end = strstr((end + 2), "us\0");
                end[0] = 'i';
                end[1] = '\0';
                printf("%s\n", a);
        }
        return 0;
}
