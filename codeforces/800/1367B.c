#include <stdio.h>

int main(void)
{
        int t, n;
        scanf("%d", &t);
        while (t--) {
                scanf("%d", &n);
                int a[n];
                int e = 0, o = 0;
                for (int i = 0; i < n; i++) {
                        int temp = 0;
                        scanf("%d", &temp);
                        temp % 2 == 0 ? e++ : o++;
                        a[i] = temp % 2 == 0 ? 0 : 1;
                }
                if ((n % 2 == 0 && e != o) || (n % 2 == 1 && e != o + 1))
                        printf("-1\n");
                else {
                        int count = 0;
                        for (int i = 0; i < n; i++)
                                if (i % 2 != a[i])
                                        count++;
                        printf("%d\n", count / 2);
                }
        }
        return 0;
}
