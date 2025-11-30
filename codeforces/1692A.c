#include <stdio.h>

int main(void) {
        int t;
        scanf("%d", &t);
        int arr[t];
        int a, b, c, d;
        int count = 0;
        for (int i = 0; i < t; i++) {
                scanf("%d %d %d %d", &a, &b, &c, &d);
                if (a < b)
                        count++;
                if (a < c)
                        count++;
                if (a < d)
                        count++;
                arr[i] = count;
                count = 0;
        }
        
        for (int j = 0; j < t; j++)
                printf("%d\n", arr[j]);

        return 0;
}
