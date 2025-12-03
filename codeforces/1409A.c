#include <stdio.h>
#include <stdlib.h>

int main(void) {
        int t;
        scanf("%d", &t);
        int arr[t];

        int moves = 0;
        int a, b;
        for (int i = 0; i < t; i++) {
                scanf("%d %d", &a, &b);
                int dist = abs(a - b);
                moves += dist / 10;
                if (dist % 10 > 0)
                        moves++;
                arr[i] = moves;
                moves = 0;
        }

        for (int i = 0; i < t; i++)
                printf("%d\n", arr[i]);

        return 0;
}
