#include <stdio.h>

// It works but might be better off doing it with strings rather than numbers
// i.e., "01" and "10" 
int main(void) {
        int n;
        scanf("%d", &n);

        int temp;
        int prev = -99;
        int groups = 0;
        for (int i = 0; i < n; i++) {
                scanf("%d", &temp);
                if (temp != prev)
                        groups++;
                prev = temp;
        }
        printf("%d\n", groups);
        return 0;
}
