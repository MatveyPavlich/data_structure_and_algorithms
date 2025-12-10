#include <stdio.h>

int main(void) {
        int t;
        scanf("%d", &t);
        int x, y, n;
        int output[t];
        for (int i = 0; i < t; i++) {
                scanf("%d %d %d", &x, &y, &n);
                output[i] = (n - (n - y) % x);
        }
        for (int i = 0; i < t; i++)
                printf("%d\n", output[i]);
        return 0;
}
