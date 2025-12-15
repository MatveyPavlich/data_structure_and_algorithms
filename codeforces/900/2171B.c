#include <stdio.h>
#define MAXN 200000

int a[MAXN];

int main(void) {
        int t;
        scanf("%d", &t);

        int start[t];
        int len[t];
        int pos = 0;

        // Input 
        for (int i = 0; i < t; i++) {
                scanf("%d", &len[i]);
                start[i] = pos;
                for (int j = 0; j < len[i]; j++) {
                        scanf("%d", &a[pos++]);
                }
        }

        // Each test case 
        for (int i = 0; i < t; i++) {
                int n = len[i];
                int *arr = &a[start[i]];

                int left = arr[0];
                int right = arr[n - 1];

                // Decide optimal ends
                if (left == -1 && right == -1) {
                        arr[0] = 0;
                        arr[n - 1] = 0;
                } else if (left == -1) {
                        arr[0] = right;
                } else if (right == -1) {
                        arr[n - 1] = left;
                }

                // Fill middle blanks with 0
                for (int j = 1; j < n - 1; j++) {
                        if (arr[j] == -1)
                                arr[j] = 0;
                }

                // Compute minimum value |a[n-1] - a[0]|
                int score = arr[n - 1] - arr[0];
                if (score < 0) score = -score;

                // Output 
                printf("%d\n", score);
                for (int j = 0; j < n; j++)
                        printf("%d ", arr[j]);
                printf("\n");
        }

        return 0;
}
