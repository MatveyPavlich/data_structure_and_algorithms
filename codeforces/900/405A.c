#include <stdio.h>

/* Algorithm:
 * Step 0: Convert columns into rows
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

        // Find the tallest column (i.e., maximum rows)
        int rows[max][n];
        for (int row = 0; row < max; row++) {
                for (int col = 0; col < n; col++) {
                        if (cols[col] > row)
                                rows[row][col] = 1;
                        else
                                rows[row][col] = 0;
                }
        }

        // Convert columns into rows
        for (int row = 0; row < max; row++) {
                int *crnt_rw = rows[row];
                for (int col = n - 1; col > 0; col--) {
                        if (crnt_rw[col] == 0) {
                                int adj_col = col - 1;
                                while (adj_col >= 0 && crnt_rw[adj_col] == 0)
                                        adj_col--;
                                if (adj_col >= 0 && crnt_rw[adj_col] == 1) {
                                        rows[row][col] = 1;
                                        crnt_rw[adj_col] = 0;
                                }
                        }
                }
        }

        /*
        // Visualising a new grid with a different gravity 
        for (int i = max - 1; i >= 0; i--) {
        for (int j = 0; j < n; j++)
        printf("%d ", rows[i][j]);
        printf("\n");
        }
        */

        // Create an array to print
        int output[n];
        for (int col = 0; col < n; col++) {
                output[col] = 0;
                for (int row = 0; row < max; row++)
                       if (rows[row][col] == 1)
                               output[col]++;
        }

        // Output the result
        for (int i = 0; i < n; i++) printf("%d ", output[i]);
        printf("\n");

        return 0;
}
