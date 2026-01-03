#include <stdio.h>
#include <string.h>

int main(void)
{
        int t;
        scanf("%d", &t);

        while (t--) {
                int n, k;
                scanf("%d %d", &n, &k);

                char s[100005];
                scanf("%s", s);

                int freq[26] = {0};
                for (int i = 0; i < n; i++)
                        freq[s[i] - 'a']++;

                int odd = 0;
                for (int i = 0; i < 26; i++)
                        if (freq[i] % 2 == 1)
                                odd++;

                if (odd <= k + 1)
                        printf("YES\n");
                else
                        printf("NO\n");

        }

        return 0;
}
