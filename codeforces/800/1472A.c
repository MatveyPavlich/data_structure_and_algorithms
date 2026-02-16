#include <stdio.h>

int main(void)
{
        int t;
        scanf("%d", &t);
        int w, h;
        long long n;
        while (t--) {
                scanf("%d %d %lld", &w, &h, &n);
                long long count = 1;
                while (w % 2 == 0 || h % 2 == 0) {
                        if (w % 2 == 0)
                                w /= 2;
                        else
                                h /= 2;
                        count *= 2;
                }
                printf("%s\n", count >= n ? "YES" : "NO");
        }
        return 0;
}
