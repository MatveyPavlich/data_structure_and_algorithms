#include <stdio.h>
#include <math.h>

int main(void) {
        int y;
        scanf("%d", &y);
        y++;
        int o = y % 10;
        int t = ((y % 100) - o) / 10;
        int h = ((y % 1000) - t - o) / 100;
        int th = (y / 1000);
        while (o == t || o == h || o == th || t == h || t == th || h == th) {
                y++;
                o = y % 10;
                t = ((y % 100) - o) / 10;
                h = ((y % 1000) - t - o) / 100;
                th = (y / 1000);
        }
        printf("%d\n", y);
        return 0;
}
