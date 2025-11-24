#include <stdio.h>
#include <string.h>

int main(void) {
        int t;
        scanf("%d", &t);
        int a, b, c;

        char buf[t][5];
        for (int i = 0; i < t; i++) {
                scanf("%d %d %d", &a, &b, &c);
                if (a + b == c || a + c == b || b + c == a)
                        strcpy(buf[i], "YES\n");
                else
                        strcpy(buf[i], "NO\n");
        }

        for (int i = 0; i < t; i++)
                printf("%s", buf[i]);

        // TODO: figure out why this is wrong
        // char buf[t * 4];
        // for (int i = 0; i < t; i++) {
        //         scanf("%d %d %d", &a, &b, &c);
        //         if (a + b == c || a + c == b || b + c == a)
        //                 buf[i * 4] = "YES\n";
        //         else
        //                 buf[i * 4] = "NO\n";
        // }
        //
        // printf("%s\n", buf);

        return 0;
}
