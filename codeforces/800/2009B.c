#include <stdio.h>

int main(void)
{
        int t;
        scanf("%d", &t);
        while (t--) {
                int rows;
                scanf("%d", &rows);
                char grid[rows][5];
                int out[rows];
                for (int i = 0; i < rows; i++)
                        scanf("%4s", grid[i]);
                
                for (int i = 0; i < rows; i++) {
                        for (int j = 0; j < 4; j++) {
                                if (grid[i][j] == '#')
                                        out[i] = j + 1;
                        }
                }
                for (int i = rows - 1; i >= 0; i--)
                        printf("%d ", out[i]);
                putchar('\n');
        }
        return 0;
}
