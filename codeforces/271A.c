#include <stdio.h>

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

/*
   // GPT solution
        int y;
        scanf("%d", &y);

        while (1) {
                y++;    
                int o = y % 10;           // ones
                int t = (y / 10) % 10;    // tens
                int h = (y / 100) % 10;   // hundreds
                int th = (y / 1000) % 10; // thousands  
                if (o != t && o != h && o != th &&
                t != h && t != th &&
                h != th)
                break;
        }
*/
