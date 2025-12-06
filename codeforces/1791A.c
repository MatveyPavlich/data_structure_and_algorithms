#include <stdio.h>
#include <string.h>

int main(void) {
        int t;
        scanf("%d", &t);
        char arr[t][5];

        char c;
        for (int i = 0; i < t; i++) {
                scanf(" %c", &c);
                if (c == 'c' ||
                                c == 'o' ||
                                c == 'd' ||
                                c == 'e' ||
                                c == 'f' ||
                                c == 'o' ||
                                c == 'r' ||
                                c == 's' )
                        strcpy(arr[i], "YES\n");
                else
                        strcpy(arr[i], "NO\n");

                // switch(c) {
                //         case 'a': printf("Char a\n"); break;
                //         case 'b': printf("Char b\n"); break;
                // }
        }

        for (int i = 0; i < t; i++)
                printf("%s", arr[i]);
        return 0;
}
