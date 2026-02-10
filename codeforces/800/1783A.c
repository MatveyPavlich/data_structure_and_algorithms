#include <stdio.h>

void sort(int arr[], int len)
{
        for (int i = 0; i < len - 1; i++) {
                for (int j = 0; j < len - i - 1; j++) {
                        if (arr[j] > arr[j + 1]) {
                                int tmp = arr[j];
                                arr[j] = arr[j + 1];
                                arr[j + 1] = tmp;
                        }
                }
        }
}

int main(void)
{
        int t;
        scanf("%d", &t);

        while (t--) {
                int n;
                scanf("%d", &n);

                int a[n];
                for (int i = 0; i < n; i++)
                        scanf("%d", &a[i]);

                sort(a, n);

                if (a[0] == a[n - 1]) {
                        printf("NO\n");
                        continue;
                }

                printf("YES\n");
                printf("%d ", a[0]);
                for (int i = n - 1; i >= 1; i--)
                        printf("%d ", a[i]);
                putchar('\n');
        }
        return 0;
}
