#include <stdio.h>
#include <stdlib.h>

int main(void){
        int matrix[5][5];
        int i_one, j_one;

        for (int i = 0; i < 5; i++) {
                for (int j = 0; j < 5; j++) {
                        scanf("%d", &matrix[i][j]);
                        if (matrix[i][j] == 1) {
                                i_one = i + 1;
                                j_one = j + 1;
                        }
                }
        }

        int moves = abs(i_one - 3) + abs(j_one - 3);
        printf("%d\n", moves);

        return 0;
}
