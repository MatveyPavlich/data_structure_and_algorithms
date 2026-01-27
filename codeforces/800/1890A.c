#include <stdio.h>
#include <stdbool.h>

bool good_array(int a[], int n)
{
        int x = a[0], y = 0;
        int cx = 1, cy = 0;

        for (int i = 1; i < n; i++) {
                if (a[i] == x)
                        cx++;
                else if (cy == 0) {
                        y = a[i];
                        cy = 1;
                } else if (a[i] == y)
                        cy++;
                else
                        return false;
        }

        if (cy == 0)
                return true;

        return (cx - cy <= 1 && cy - cx <= 1);
}

int main(void)
{
        int t;
        scanf("%d", &t);
        int n;
        while (t--) {
                scanf("%d", &n);
                int b[n];
                for (int i = 0; i < n; i++)
                        scanf("%d", &b[i]);
                if (n == 2)
                        printf("YES\n");
                else {
                        printf("%s\n", good_array(b, n) ? "YES" : "NO");
                }
        }
        return 0;
}
