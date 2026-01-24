#include <stdio.h>

int main(void)
{
        int t;
        scanf("%d", &t);
        int n;
        char lookup[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
                      'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't',
                      'u', 'v', 'w', 'x', 'y', 'z'};
        while (t--) {
                int count_curr, count_max = 0;
                scanf("%d", &n);
                char s[n + 1];
                scanf("%s", s);
                for (int i = 0; i < n; i++) {
                        for (int j = 0; j < 26; j++) {
                                if (lookup[j] == s[i])
                                        count_curr = j + 1;
                        }
                        if (count_curr > count_max)
                                count_max = count_curr;
                }
                printf("%d\n", count_max);
        }
        return 0;
}
