#include <stdio.h>

int main(void) {
        int t;
        scanf("%d", &t);
        int output[t];
        int n, x;
        for (int i = 0; i < t; i++) {
                scanf("%d %d", &n, &x);
                int stations[n + 2];
                stations[0] = 0;
                stations[n+1] = x;
                for (int j = 1; j <= n; j++)
                        scanf("%d", &stations[j]);
                int max_dist = 0;
                for (int j = 0; j < n + 1; j++) {
                        int dist = stations[j+1] - stations[j];
                        if (j == n)
                                dist *= 2;
                        if (max_dist < dist)
                                max_dist = dist;
                }

                output[i] = max_dist;
        }

        for (int i = 0; i < t; i++)
                printf("%d\n", output[i]);

        return 0;
}
