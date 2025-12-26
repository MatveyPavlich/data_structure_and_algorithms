#include <stdio.h>
#include <stdlib.h>
#define MAX_LEN 200000

static int arr[MAX_LEN];

int cmp(const void *a, const void *b) {
        int x = *(const int*)a;
        int y = *(const int*)b;
        return (x > y) - (x < y);
}

// void sort(int arr[], int len)
// {
//         for (int i = 0; i < len - 1; i++) {
//                 for (int j = 0; j < len - i - 1; j++) {
//                         if (arr[j] > arr[j + 1]) {
//                                 int temp = arr[j + 1];
//                                 arr[j + 1] = arr[j];
//                                 arr[j] = temp;
//                         }
//                 }
//         }
// }

int main(void)
{
        int t;
        scanf("%d", &t);
        int out[t];
        // (void)out;
        int n;
        long long k;
        for (int i = 0; i < t; i++) {
                scanf("%d %lld", &n, &k);
                for (int j = 0; j < n; j++) scanf("%d", &arr[j]);
                // sort(arr, n);
                qsort(arr, n, sizeof(int), cmp);
                int max = 1;
                int curr = 1;
                for (int j = 1; j < n; j++) {
                        if ((arr[j] - arr[j - 1]) <= k) curr++;
                        else curr = 1;
                        if (curr > max) max = curr;
                }
                out[i] = n - max;
                // printf("Ans: %d. Arr: ", out[i]);
                // for (int j = 0; j < n; j++) printf("%d ", arr[j]);
                // printf("\n");
        }

        for (int i = 0; i < t; i++) printf("%d\n", out[i]);

        return 0;
}
