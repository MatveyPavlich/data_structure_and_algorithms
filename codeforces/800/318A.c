#include <stdio.h>

int main(void) {
        int n, k;
        scanf("%d %d", &n, &k);

        int arr[n];
        int i = 0;

        for (int x = 1; x <= n; x += 2)
                arr[i++] = x;

        for (int x = 2; x <= n; x += 2)
                arr[i++] = x;

        printf("%d\n", arr[k - 1]);

        return 0;
}
