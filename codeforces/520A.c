#include <stdio.h>
#include <ctype.h>

int main(void) {
        int n;
        scanf("%d", &n);
        char s[n + 1];
        scanf("%s", s);

        char alphabet[26] = {0};

        for (int i = 0; i < n; i++) {
                char c = toupper((unsigned char)s[i]);
                if (c >= 'A' && c <= 'Z')
                        alphabet[c - 'A'] = 1;
        }

        int count = 0;
        for (int i = 0; i < 26; i++)
                count += alphabet[i];

        if (count == 26)
                printf("YES\n");
        else
                printf("NO\n");

        return 0;
}
