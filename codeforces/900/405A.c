#include <stdio.h>

/* Algorithm:
 * Step 1: Find a gap by traversing to the left from first row
 * Step 2: See if there is a block on the same row. If yes, fill the gap
*/

int main(void) {
        int n;
        scanf("%d", &n);
        int box[n];
        for (int i = 0; i < n; i++)
                scanf("%d", &box[i]);
        
        int max = box[0];
        for (int i = 1; i < n; i++)
                if (box[i] > max) max = box[i];

        int grid[max][n];
        for (int i = 0; i < n; i++) {
                int col = box[i];
                for (int j = 0; j < max; j++) {
                        if (col > 0) grid[i][j] = 1;
                        else grid[i][j] = 0;
                }
        }
        
        for (int i = 0; i < max; i++) {
                for (int j = 0; j <= n; j++) {
                        if (j == n) printf("\n");
                        else if (grid[j][i] == 1) printf("x ");
                        else printf("0 ");
                }
        }

        printf("Max: %d\n", max);
        // for (int j = n - 1; j >= 0 ; j--) {
        //         if (box[j] < box[j-1])
        //                 box[j]++;
        // }

        for (int i = 0; i < n; i++) {
                if (i == n - 1)
                        printf("%d\n", box[i]);
                else
                        printf("%d ", box[i]);
        }
        return 0;
}
