#include <stdio.h>

int main(void) {
        int n, h;
        scanf("%d %d", &n, &h);

        int width = 0;
        int a;
        for (int i = 0; i < n; i++) {
                scanf("%d", &a);
                if (a > h) width +=2;
                else width++;
        }
        printf("%d\n", width);
        return 0;
}
