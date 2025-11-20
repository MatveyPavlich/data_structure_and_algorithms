#include <stdio.h>

int main(void) {
        long n;
        scanf("%ld", &n);
        int bills[5] = {100, 20, 10, 5, 1};
        long bill_count = 0;

        for (int i = 0; i < 5; i++) {
                bill_count += n / bills[i];
                n = n % bills[i];
                if (n == 0)
                        break;
        }

        printf("%ld\n", bill_count);

        return 0;
}
