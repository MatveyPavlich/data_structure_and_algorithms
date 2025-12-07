#include <stdio.h>
 
int main(void) {
        int n;
        scanf("%d", &n);

        int max = 0;
        long sum = 0;
        int values[n];

        for (int i = 0; i < n; i++) {
                scanf("%d", &values[i]);
                if (max < values[i])
                        max = values[i];
        }

        for (int j = 0; j < n; j++)
                sum += (max - values[j]);
        printf("%ld\n", sum);

        return 0;
}

/* First try:
int main(void) {
        int n;
        scanf("%d", &n);
        int arr[n];
        int max = 0;
        int temp;
        for (int i = 0; i < n; i++) {
                scanf("%d", &temp);
                if (max < temp)
                        max = temp;
                arr[i] = temp;
        }

        int accumulator = 0;
        for (int j = 0; j < n; j++)
                accumulator += (max - arr[j]);
        printf("%d\n", accumulator);

        return 0;
}
*/
