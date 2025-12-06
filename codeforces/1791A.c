#include <stdio.h>
#include <string.h>

int main(void) {
        int t;
        scanf("%d", &t);
        char arr[t][5];

        char c;
        char *s = "codeforces";
        for (int i = 0; i < t; i++) {
                scanf(" %c", &c);
                if (strchr(s, c))
                        strcpy(arr[i], "YES\n");
                else
                        strcpy(arr[i], "NO\n");
        }


        for (int i = 0; i < t; i++)
                printf("%s", arr[i]);
        return 0;
}

// // Way 1: hardcode a bunch of OR statements
// for (int i = 0; i < t; i++) {
//         scanf(" %c", &c);
//         if (c == 'c' ||
//                         c == 'o' ||
//                         c == 'd' ||
//                         c == 'e' ||
//                         c == 'f' ||
//                         c == 'o' ||
//                         c == 'r' ||
//                         c == 's' )
//                 strcpy(arr[i], "YES\n");
//         else
//                 strcpy(arr[i], "NO\n");
// }

// switch(c) {
//         case 'a': printf("Char a\n"); break;
//         case 'b': printf("Char b\n"); break;
// }
