#include <stdio.h>

int main(void) {
        int t;
        scanf("%d", &t);

        char grid[3][3];
        for (int i = 0; i < t; i++) {
                for (int row = 0; row < 3; row++)
                        scanf("%3s", grid[row]);
        }

        for (int row = 0; row < 3; row++)
                printf("%s\n", grid[row]);
        return 0;
}


/*
int main(void) {
        int t;
        scanf("%d", &t);

        int results[t];

        for (int tc = 0; tc < t; tc++) {
                char grid[10][11];

                for (int row = 0; row < 10; row++) {
                        scanf("%10s", grid[row]);
                }

                int score = 0;

                for (int r = 0; r < 10; r++) {
                        for (int c = 0; c < 10; c++) {
                                if (grid[r][c] == 'X') {
                                        int d1 = r;
                                        int d2 = c;
                                        int d3 = 9 - r;
                                        int d4 = 9 - c;

                                        int min = d1;
                                        if (d2 < min) min = d2;
                                        if (d3 < min) min = d3;
                                        if (d4 < min) min = d4;

                                        int ring = min + 1;  // 1..5
                                        score += ring;
                                }
                        }
                }

                results[tc] = score;
        }

        for (int i = 0; i < t; i++)
                printf("%d\n", results[i]);

        return 0;
}
*/
