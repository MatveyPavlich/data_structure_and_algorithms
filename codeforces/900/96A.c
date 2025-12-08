#include <stdio.h>
#include <string.h>

int main(void) {
        char pl[102];
        scanf("%s", pl);

        int count = 1; 
        int max_count = 1;

        for (int i = 1; pl[i] != '\0'; i++) {
                if (pl[i] == pl[i - 1]) {
                        count++;
                } else {
                        count = 1; 
                }

                if (count > max_count)
                        max_count = count;

                if (max_count >= 7)
                        break;
        }

        printf("%s", max_count >= 7 ? "YES\n" : "NO\n");
        return 0;
}

/* My original solution
int main(void) {
        char pl[102];
        scanf("%s", pl);

        char team = pl[0];
        int count = 0, max_count = 0;
        for (int i = 0; pl[i] != '\0'; i++) {
                if (team != pl[i]) {
                        team = pl[i];
                        max_count = count;
                        count = 0;
                }
                count++;

                if (max_count >= 7) {
                        max_count = count;
                        break;
                }
        }

        printf("%s", max_count >= 7 ? "YES\n" : "NO\n");

        return 0;
}
*/
