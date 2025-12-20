#include <stdio.h>
#define MAX_LEN 100

int main(void)
{
        int t;
        scanf("%d", &t);

        static int arr[MAX_LEN];
        int n;
        while (t--) {
                scanf("%d", &n);
                for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

                int count = 0;
                int final_count = 0;
                for (int i = 0; i < n; i++) {
                        if (arr[i] == 0) count++;
                        if (arr[i] == 1 || i == (n - 1)) {
                                if (count > final_count)
                                        final_count = count;
                                count = 0;
                        }
                }
                printf("%d\n", final_count);
        }

        return 0;
}
