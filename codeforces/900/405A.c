#include <stdio.h>

/* Algorithm:
 * Step 1: Find a gap by traversing to the left from first row
 * Step 2: See if there is a block on the same row. If yes, fill the gap
*/

int main(void) {
        int n;
        scanf("%d", &n);
        int cols[n];
        for (int i = 0; i < n; i++)
                scanf("%d", &cols[i]);
        
        int max = cols[0];
        for (int i = 1; i < n; i++)
                if (cols[i] > max) max = cols[i];

        int rows[max][n+1];
        for (int row = 0; row < max; row++) {
                for (int col = 0; col < n; col++) {
                        if (cols[col] > row)
                                rows[row][col] = 1;
                        else
                                rows[row][col] = 0;
                        // printf("%d ", rows[row][col]);
                }
                // printf("\n");
        }

        for (int i = max - 1; i >= 0; i--) {
                for (int j = 0; j < n; j++)
                        printf("%d ", rows[i][j]);
                printf("\n");
        }
        
        return 0;
}
