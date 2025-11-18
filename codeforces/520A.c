#include <stdio.h>
#include <ctype.h>

int main(void) {
        int n;
        scanf("%d", &n);
        char s[n];
        scanf("%s", s);

        for (int i = 0; i < n; i++)
                s[i] = tolower(s[i]);
        printf("%s\n", s);

        return 0;
}
