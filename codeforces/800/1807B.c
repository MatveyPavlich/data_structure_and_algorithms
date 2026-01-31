#include <stdio.h>

int main(void)
{
        int t;
        scanf("%d", &t);
        int n;
        while (t--) {
                scanf("%d", &n);
                int temp;
                int sum_even = 0;
                int sum_odd = 0;
                for (int i = 0; i < n; i++) {
                        scanf("%d", &temp);
                        if (temp % 2 == 0)
                                sum_even += temp;
                        else
                                sum_odd += temp;
                }
                printf("%s\n", sum_even > sum_odd ? "YES" : "NO");
        }
        return 0;
}
