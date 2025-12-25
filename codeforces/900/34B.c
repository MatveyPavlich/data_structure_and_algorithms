#include <stdio.h>

void sort(int arr[], int len)
{
        for (int i = 0; i < len - 1; i++) {
                for (int j = 0; j < len - i - 1; j++) {
                        if (arr[j + 1] < arr[j]) {
                                int temp = arr[j];
                                arr[j] = arr[j + 1];
                                arr[j + 1] = temp;
                        }
                }
        }
}

int main(void)
{
        int n, m;
        scanf("%d %d", &n, &m);
        int tvs[n];
        for (int i = 0; i < n; i++) scanf("%d", &tvs[i]);
        sort(tvs, n);

        int max_money = 0;
        for (int i = 0; i < m && tvs[i] < 0; i++) max_money += tvs[i];
        printf("%d\n", -max_money);
        return 0;
}
