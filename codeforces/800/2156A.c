#include <stdio.h>

int main(void) {
        int t;
        scanf("%d", &t);

        while (t--) {
                long long m;
                scanf("%lld", &m);
                long long hao = 0;
                while (m >= 3) {
                        long long eat = m / 3;
                        hao += eat;
                        m = m - 2 * eat;
                }

                printf("%lld\n", hao);
        }

        return 0;
}

/* My naive and broken implementation
int main(void)
{
        int t;
        scanf("%d", &t);
        int m;
        while (t--) {
                scanf("%d", &m);
                int hao = 0;
                int m3;
                while (m > 0) {
                        if (m <= 2) m = 0;
                        else if (m % 3 == 0) {
                                m3 = m / 3;
                                hao += m3;
                        }
                        else if (m % 3 == 1) {
                                m3 = (m / 3) + 1;
                                hao += (m - m3) / 2;
                        }
                        else if (m % 3 == 2) {
                                m3 = (m / 3) + 1;
                                hao += (m - m3 * 2);
                        }
                        m = m3;
                }
                printf("%d\n", hao);
        }
        return 0;
}
*/
