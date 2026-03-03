#include <stdio.h>

int main(void)
{
        int n, distressed = 0;
        long long ice, d;
        scanf("%d %lld", &n, &ice);
        char op;

        for (int i = 0; i < n; i++) {
                scanf(" %c %lld", &op, &d);

                if (op == '+')
                        ice += d;
                else {
                        if (ice >= d)
                                ice -= d;
                        else
                                distressed++;
                }
        }

        printf("%lld %d\n", ice, distressed);

        return 0;
}
