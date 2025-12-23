#include <stdio.h>

int main(void)
{
        int t;
        scanf("%d", &t);
        int n;
        while (t--) {
                scanf("%d", &n);
                int twos = 0;
                int threes = 0;
                int temp = n;
                while (temp % 2 == 0 || temp % 3 == 0) {
                        if (temp % 2 == 0) {
                                twos++;
                                temp /= 2;
                        }
                        if (temp % 3 == 0) {
                                threes++;
                                temp /= 3;
                        }
                }
                // // Debugging
                // printf("Num %d (rem = %d): 2^(%d), 3^(%d)\n", n,
                //                                               temp,
                //                                               twos,
                //                                               threes);

                if (n == 1)                         printf("%d\n", 0);
                else if ((twos == 0 && threes == 0)
                         || threes < twos
                         || temp > 1)               printf("%d\n", -1);
                else {
                        printf("%d\n", (threes - twos) + threes);
                }
        }
        return 0;
}
