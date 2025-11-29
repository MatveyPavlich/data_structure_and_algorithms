#include <stdio.h>

// 05 25 25
int main(void) {
        long n;
        scanf("%ld", &n);

        if (n == 0)
                printf("%s\n", "01");
        else if (n == 1)
                printf("%s\n", "05");
        else
                printf("%s\n", "25");

        return 0;
}
