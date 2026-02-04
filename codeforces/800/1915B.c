#include <stdio.h>
#include <string.h>

int main(void)
{
        int t;
        scanf("%d", &t);
        while (t--) {
                char l[3][4];
                scanf("%3s", l[0]);
                scanf("%3s", l[1]);
                scanf("%3s", l[2]);
                int fill_row;

                for (int y = 0; y < 3; y++) {
                        char *question = strchr(l[y], '?');
                        if (question != NULL) {
                                fill_row = y;
                                break;
                        }
                }
                
                char *a = strchr(l[fill_row], 'A');
                char *b = strchr(l[fill_row], 'B');

                printf("%c\n", a == NULL ? 'A' : (b == NULL ? 'B' : 'C'));
        }
        return 0;
}
