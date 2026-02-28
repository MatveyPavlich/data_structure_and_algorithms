#include <stdio.h>
#include <string.h>

int main(void)
{
        int t;
        scanf("%d", &t);

        while (t--) {
                char b[101];
                char a[51];
                scanf("%s", b);
                int len = strlen(b);
                int count = 0;
                a[count++] = b[0];
                for (int i = 1; i < len; i += 2)
                        a[count++] = b[i];
                a[count] = '\0';
                printf("%s\n", a);
        }

        return 0;
}
