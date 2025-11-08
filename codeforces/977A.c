#include <stdio.h>

int main(void)
{

        int n, k;
        scanf("%d %d", &n, &k);

        for (size_t i = 0; i < k; i++) {
                if (n % 10 == 0)
                        n /= 10;
                else
                        n--;
        }
        printf("%d\n", n);
        return 0;
}
