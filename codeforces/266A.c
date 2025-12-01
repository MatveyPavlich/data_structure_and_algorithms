#include <stdio.h>

int main(void) {
        int n;
        scanf("%d", &n);

        char s[51];
        scanf("%s", s);

        int remove = 0;

        for (int i = 0; i < n - 1; i++) {
                if (s[i] == s[i + 1])
                        remove++; 
        }

        printf("%d\n", remove);

        return 0;
}
