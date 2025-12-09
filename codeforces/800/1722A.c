#include <stdio.h>
#include <string.h>

int main(void) {
        int t;
        scanf("%d", &t);
        char output[t][5];

        int n;
        for (int i = 0; i < t; i++) {
                scanf("%d", &n);
                char s[n];
                scanf("%s", s);
                int ok = 1;
                ok &= strchr(s, 'T') != NULL;
                ok &= strchr(s, 'i') != NULL;
                ok &= strchr(s, 'm') != NULL;
                ok &= strchr(s, 'u') != NULL;
                ok &= strchr(s, 'r') != NULL;
                
                if (ok == 1 && n == 5)
                        strcpy(output[i], "YES\n");
                else
                        strcpy(output[i], "NO\n");
        }

        for (int i = 0; i < t; i++)
                printf("%s", output[i]);
        return 0;
}
