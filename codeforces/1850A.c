#include <stdio.h>
#include <string.h>

int main(void) {
        int t;
        scanf("%d", &t);
        int a, b, c;
        char out[t][5];
        
        int min;
        for (int i = 0; i < t; i++) {
                scanf("%d %d %d", &a, &b, &c);
                min = a;
                if (b < min) min = b;
                if (c < min) min = c;

                if (a + b + c - min >= 10)
                        strcpy(out[i], "YES\n");
                else
                        strcpy(out[i], "NO\n");
        }

        for (int i = 0; i < t; i++)
                printf("%s", out[i]);

        return 0;
}
