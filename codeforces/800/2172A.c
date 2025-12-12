#include <stdio.h>

int main(void) {
        int g, c, l;
        scanf("%d %d %d", &g, &c, &l);
        
        int arr[] = {g, c, l};

        for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 2; j++) {
                        if (arr[j] > arr[j+1]) {
                                int temp = arr[j];
                                arr[j] = arr[j+1];
                                arr[j+1] = temp;
                        }
                }
        }

        if (arr[2] - arr[0] >= 10)
                printf("check again\n");
        else
                printf("final %d\n", arr[1]);

        return 0;
}
