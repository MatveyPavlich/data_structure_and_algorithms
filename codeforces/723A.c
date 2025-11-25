#include <stdio.h>
#include <stdlib.h>

// Sort helper
int compare(const void *a, const void *b) {
        int int_a = *(int*)a;
        int int_b = *(int*)b;

        if (int_a == int_b)
                return 0;
        else if (int_a < int_b)
                return -1;
        else
                return 1;
}

int main(void) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        int arr[3] = {a, b, c}; 
        qsort( arr, 3, sizeof(int), compare);
        int dist = (arr[1] - arr[0]) + (arr[2] - arr[1]);
        printf("%d\n", dist);
        return 0;
}
