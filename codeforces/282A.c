#include <stdio.h>
#include <string.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int x = 0;  // start value

    for (int i = 0; i < n; i++) {
        char op[5];          // 3 chars + '\0' (a bit extra for safety)
        scanf("%s", op);     // read string (like ++X or X--)

        if (strstr(op, "++") != NULL)
            x++;
        else
            x--;
    }

    printf("%d\n", x);
    return 0;
}
