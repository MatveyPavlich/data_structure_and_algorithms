// No idea how Vanya can win when n=6 (one of the test cases)
#include <stdio.h>
#include <string.h>

int main(void) {
        int t;
        scanf("%d", &t);
        char arr[t][8];

        int n;
        for (int i = 0; i < t; i++) {
                scanf("%d", &n);
                if (n % 3 == 0)
                        strcpy(arr[i], "Second\n");
                else
                        strcpy(arr[i], "First\n");
        }

        for (int j = 0; j < t; j++)
                printf("%s", arr[j]);

        return 0;
}
