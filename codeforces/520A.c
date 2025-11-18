#include <stdio.h>
#include <ctype.h>

int main(void) {
        int n;
        scanf("%d", &n);
        char s[n];
        scanf("%s", s);

        char alphabet[25];

        for (int i = 0; i < n; i++) {
                s[i] = toupper(s[i]);
                printf("%d\n", (int)(s[i] - 65));
                fflush(stdout);
                alphabet[(s[i] - 65)] = 1;
        }

        int count = 0;
        for (int i = 0; i < 25; i++)
                count += alphabet[i];

        if (count == 25)
                printf("YES\n");
        else
                printf("NO\n");

        return 0;
}
