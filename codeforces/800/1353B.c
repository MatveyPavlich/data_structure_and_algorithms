#include <stdio.h>

void bubble_sort(int *arr, int len)
{
        int temp;
        for (int i = 0; i < len - 1; i++) {
                for (int j = 0; j < len - i - 1; j++) {
                        if (arr[j] > arr[j + 1]) {
                                temp = arr[j];
                                arr[j] = arr[j+1];
                                arr[j+1] = temp;
                        }
                }
        }
}

void print_array(int *arr, int len)
{
        for (int i = 0; i < len; i++)
                printf("%d ", arr[i]);
        printf("\n");
}

int main(void)
{
        int t;
        scanf("%d", &t);
        int n, k;
        while (t--) {
                scanf("%d %d", &n, &k);
                int a[n];
                for (int i = 0; i < n; i++)
                        scanf("%d", &a[i]);
                bubble_sort(a, n);
                // print_array(a, n);

                int b[n];
                for (int i = 0; i < n; i++)
                        scanf("%d", &b[i]);
                bubble_sort(b, n);
                // print_array(b, n);

                for (int i = k - 1; i >= 0; i--) {
                        if (a[i] < b[n - 1]) {
                                int temp = a[i]; 
                                a[i] = b[n - 1];
                                b[n - 1] = temp;
                                bubble_sort(b, n);
                        }
                }

                int sum = 0;
                // print_array(a, n);
                for (int i = 0; i < n; i++)
                        sum += a[i];
                printf("%d\n", sum);
        }
        return 0;
}
