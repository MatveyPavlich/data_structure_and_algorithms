#include <stdio.h>

int main(void)
{
        int t;
        scanf("%d", &t);
        int n, m;
        while (t--) {
                scanf("%d %d", &n, &m);
                char s[n + 1];
                scanf("%s", s);

                int scores[(int)('G' - 'A' + 1)] = {0};
                for (int i = 0; s[i] != '\0'; i++)
                        scores[s[i] - 'A']++;

                int count = 0;
                for (int i = 0; i < ('G' - 'A' + 1); i++) {
                        // printf("%d ", scores[i]);
                        if (m > scores[i])
                                count += (m - scores[i]);
                }
                // putchar('\n');

                printf("%d\n", count);
        }
        return 0;
}
