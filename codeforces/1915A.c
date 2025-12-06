#include <stdio.h>

int main(void) {
        int t;
        scanf("%d", &t);
        int arr[t];
        int a, b, c;
        for (int i = 0; i < t; i++) {
                scanf("%d %d %d", &a, &b, &c);
                if (a == b)
                        arr[i] = c;
                else if (a == c)
                        arr[i] = b;
                else
                        arr[i] = a;
        }

        for (int i = 0; i < t; i++)
                printf("%d\n", arr[i]);
                
        return 0;
}
