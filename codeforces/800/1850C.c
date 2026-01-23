#include <stdio.h>

int main(void)
{
        int t;
        scanf("%d", &t);

        while (t--) {
                char grid[8][9];

                for (int i = 0; i < 8; i++)
                        scanf("%8s", grid[i]);

                int col = -1;
                for (int j = 0; j < 8 && col == -1; j++) {
                        for (int i = 0; i < 8; i++) {
                                if (grid[i][j] != '.') {
                                        col = j;
                                        break;
                                }
                        }
                }

                for (int i = 0; i < 8; i++) {
                        if (grid[i][col] != '.')
                                putchar(grid[i][col]);
                }
                putchar('\n');
        }

        return 0;
}
