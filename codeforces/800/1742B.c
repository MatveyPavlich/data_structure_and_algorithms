#include <stdio.h>

int main(void)
{
        int t;
        scanf("%d", &t);
        int n;
        while (t--) {
                scanf("%d", &n);
                long long a[n];
                for (int i = 0; i < n; i++)
                        scanf("%lld", &a[i]);
                int ok = 1;
                for (int i = 0; i < n - 1; i++) {
                        for (int j = i + 1; j < n; j++) {
                                if (a[i] == a[j]) {
                                        ok = 0;
                                        break;
                                }
                        }
                }
                printf(ok ? "YES\n" : "NO\n");
        }
        return 0;
}
