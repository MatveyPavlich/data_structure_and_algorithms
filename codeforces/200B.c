#include <stdio.h>

int main(void) {
        int n;
        scanf("%d", &n);
        float o = 0;
        float temp;
        for (int i = 0; i < n; i++) {
                scanf("%f", &temp);
                o += temp;
        }
        printf("%f\n", o / n);
        return 0;
}
