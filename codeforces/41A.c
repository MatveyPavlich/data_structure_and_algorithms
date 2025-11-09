#include <stdio.h>
#include <string.h>

int main(void) {

        char o[101], b[101];
        scanf("%s", o);
        scanf("%s", b);

        int len = strlen(o);
        int len2 = strlen(b);

        if (len != len2) {
                printf("NO\n");
                return 0;
        };

        int is_reverse = 1;
        for (int j = 0; j < len; j++) {
                if(o[j] != b[len - j - 1]) {
                        is_reverse = 0;
                        break;
                }
        }

        if(is_reverse)
                printf("YES\n");
        else
                printf("NO\n");

        return 0;
}
