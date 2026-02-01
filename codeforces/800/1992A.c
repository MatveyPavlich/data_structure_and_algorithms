#include <stdio.h>

int a[3];
int index_min = 0;

void find_min_index()
{
        index_min = 0;
        if (a[index_min] > a[1])
                index_min = 1;
        if (a[index_min] > a[2])
                index_min = 2;
        // printf("Min num: %d\n", a[index_min]);
        // printf("Array: %d, %d, %d\n", a[0], a[1], a[2]);
}

int main(void)
{
        int t;
        scanf("%d", &t);
        while (t--) {
                scanf("%d %d %d", &a[0], &a[1], &a[2]);
                find_min_index();
                for (int i = 0; i < 5; i++) {
                        a[index_min]++;
                        find_min_index();
                }
                // printf("Array: %d, %d, %d\n", a[0], a[1], a[2]);
                printf("%d\n", a[0] * a[1] * a[2]);
        }
        return 0;
}
