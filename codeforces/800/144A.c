#include <stdio.h>

int main(void)
{
        int n;
        scanf("%d", &n);

        int arr[n];
        for (int i = 0; i < n; i++)
                scanf("%d", &arr[i]);

        int max = arr[0], min = arr[0];
        int max_index = 0, min_index = 0;

        for (int i = 0; i < n; i++) {
                if (arr[i] > max) {
                        max = arr[i];
                        max_index = i;
                }
                if (arr[i] <= min) {
                        min = arr[i];
                        min_index = i;
                }
        }

        int result = max_index + (n - 1 - min_index);

        if (max_index > min_index)
                result--;

        printf("%d\n", result);
        return 0;
}
