#include <stdio.h>
#include <ctype.h>

int main(void) {
        char s[1005];
        fgets(s, sizeof(s), stdin);

        int seen[26] = {0};
        int count = 0;

        for (int i = 0; s[i]; i++) {
                if (s[i] >= 'a' && s[i] <= 'z') {
                        int idx = s[i] - 'a';
                        if (!seen[idx]) {
                                seen[idx] = 1;
                                count++;
                        }
                }
        }

        printf("%d\n", count);
        return 0;
}
