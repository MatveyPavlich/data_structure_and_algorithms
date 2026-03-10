#include <stdio.h>
#include <math.h>

int main(void)
{
        int t;
        scanf("%d", &t);

        while (t--) {
                char s[5];
                scanf("%s", s);

                int n = (s[0]-'0')*1000 +
                        (s[1]-'0')*100 +
                        (s[2]-'0')*10 +
                        (s[3]-'0');

                int k = sqrt(n);

                if (k * k == n)
                        printf("0 %d\n", k);
                else
                        printf("-1\n");
        }

        return 0;
}
