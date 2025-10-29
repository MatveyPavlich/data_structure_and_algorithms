#include <stdio.h>

int main(void)
{
    int n, k;
    scanf("%d %d", &n, &k);

    int scores[50];  // n ≤ 50 from problem constraints
    for (int i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }

    int cutoff = scores[k - 1];
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (scores[i] >= cutoff && scores[i] > 0)
            count++;
    }

    printf("%d\n", count);
    return 0;
}
