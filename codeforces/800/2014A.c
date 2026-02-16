#include <stdio.h>

int main(void)
{
        int t;
        scanf("%d", &t);
        int n, k;
        while (t--) {
                scanf("%d %d", &n, &k);
                int temp, gold = 0, give = 0;
                for (int i = 0; i < n; i++) {
                        scanf("%d", &temp);
                        if (temp >= k)
                                gold += temp;
                        else {
                                if (gold && !temp) {
                                        gold--;
                                        give++;
                                }
                        }
                        // printf("Money: %d\n", gold);
                }
                printf("%d\n", give);
        }
        return 0;
}
