#include <stdio.h>
#include <string.h>

int main(void) {
        int t;
        scanf("%d", &t);
        char arr[t][5];

        int n;
        for (int i = 0; i < t; i++) {
                scanf("%d", &n);

                int f = n % 10;
                int e = ((n % 100) - f) / 10;
                int d = ((n % 1000) - f - e) / 100;
                int c = ((n % 10000) - f - e - d) / 1000;
                int b = ((n % 100000) - f - e - d - c) / 10000;
                int a = n / 100000;

                if (a + b + c == d + e + f)
                        strcpy(arr[i], "YES\n");
                else
                        strcpy(arr[i], "NO\n");
        }

        for (int j = 0; j < t; j++)
                printf("%s", arr[j]);

        return 0;
}
