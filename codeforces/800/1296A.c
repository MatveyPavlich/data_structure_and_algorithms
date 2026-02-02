#include <stdio.h>

int main(void)
{
        int t;
        scanf("%d", &t);
        int n;
        while (t--) {
                scanf("%d", &n);
                int a[n];
                for (int i = 0; i < n; i++)
                        scanf("%d", &a[i]);
                int even = 0, odd = 0;

                for (int i = 0; i < n; i++) {
                        if (a[i] % 2 == 0)
                                even++;
                        else
                                odd++;
                }
                if ((odd % 2 == 0 && even == 0) || (odd == 0))
                        printf("NO\n");
                else
                        printf("YES\n");
        }
        return 0;
}
