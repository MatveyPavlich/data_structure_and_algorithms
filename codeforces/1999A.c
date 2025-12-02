#include <stdio.h>

int main(void) {
        int t;
        scanf("%d", &t);
        int arr[t];
        int n;
        for (int i = 0; i < t; i++) {
                scanf("%d", &n);
                arr[i] = (n / 10) + (n % 10);
        }
        
        for (int j = 0; j < t; j++)
                printf("%d\n", arr[j]);

        return 0;
}
