#include <stdio.h>

int main(void)
{
        int t;
        char s[11];
        scanf("%d", &t);
        while (t--) {
                scanf("%s", s);
                int letters[26] = {0};
                int diff_chars = 0;
                for (int i = 0; s[i] != '\0'; i++) {
                        int letter_index = s[i] - 'a';
                        letters[letter_index]++;
                        if (letters[letter_index] == 1)
                                diff_chars++;
                }

                if (diff_chars == 1)
                        printf("NO\n");
                else {
                        for (int i = 0; s[i] != '\0'; i++) {
                                if (s[i] != s[i + 1]) {
                                        char temp = s[i];
                                        s[i] = s[i + 1];
                                        s[i + 1] = temp;
                                        printf("YES\n%s\n", s);
                                        break;
                                }
                        }
                }
        }
        return 0;
}
