#include <stdio.h>
#include <stdlib.h>

int main(void)
{
        int t;
        scanf("%d", &t);
        int n;
        while (t--) {
                scanf("%d", &n);
                int a[2 * n];
                int odd = 0, even = 0;
                for (int i = 0; i < 2 * n; i++) {
                        scanf("%d", &a[i]);
                        a[i] % 2 == 0 ? even++ : odd++;
                }
                
                if (even - odd == 0)
                        printf("Yes\n");
                else
                        printf("%s\n", abs(even - odd) % 2 == 1 ? "Yes" : "No"); 

        }
        return 0;
}
