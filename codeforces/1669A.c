#include <stdio.h>
#include <string.h>

int main(void) {
        int t;
        scanf("%d", &t);
        char arr[t][12];

        int tmp = 0;
        for (int i = 0; i < t; i++) {
                scanf("%d", &tmp);

                if (tmp >= 1900)
                        strcpy(arr[i], "Division 1\n");
                else if (tmp >= 1600)
                        strcpy(arr[i], "Division 2\n");
                else if (tmp >= 1400)
                        strcpy(arr[i], "Division 3\n");
                else
                        strcpy(arr[i], "Division 4\n");
        }

        for (int j = 0; j < t; j++)
                printf("%s", arr[j]);

        return 0;
}
