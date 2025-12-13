#include <stdio.h>

// Bubble sort
void sort(int arr[], int size) {
        for (int i = 0; i < size; i++) {
                for (int j = 0; j < size - 1; j++) {
                        if (arr[j] > arr[j+1]) {
                                int temp = arr[j];
                                arr[j] = arr[j+1];
                                arr[j+1] = temp;
                        }
                }
        }
}

int main(void) {
        int t;
        scanf("%d", &t);
        int output[t];
        for (int i = 0; i < t; i++) {
                char grid[10][11];
                int score = 0;
                for (int row = 0; row < 10; row++) {
                        scanf("%10s", grid[row]);
                        for (int col = 0; col < 10; col++) {
                                if (grid[row][col] == 'X') {
                                        int distances[4] = {row, col, (9 - row), (9 - col)};
                                        sort(distances, 4);
                                        score += distances[0] + 1;
                                }
                        }
                }
                output[i] = score;
        }

        for (int i = 0; i < t; i++)
                printf("%d\n", output[i]);
        return 0;
}
