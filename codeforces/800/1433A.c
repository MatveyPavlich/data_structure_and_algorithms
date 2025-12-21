#include <stdio.h>

int main(void)
{
        // Setup
        int flats[9*4];
        int helper[] = {1, 11, 111, 1111};
        for (int i = 0; i < 9*4; i++) {
                flats[i] = helper[i%4] * ((i / 4) + 1);
                // printf("flats[%d] = %d\n", i, arr[i]);
        }
        int dials[9*4];
        for (int flat = 0; flat < 9*4; flat++) {
                dials[flat] = (flat % 4) + 1;
                // dials[flat] = (flat / 4) + (flat % 4);
                printf("Flat %d (%d) score: %d\n", flats[flat], flat, dials[flat]);
        }
        // Read input
        int t;
        scanf("%d", &t);
        int x;
        while (t--) {
                scanf("%d", &x);
                int flat_pos = 0;
                while (flats[flat_pos] != x) flat_pos++;
                int ttl_dials = 0;
                for (int i = 0; i < flat_pos; i++) ttl_dials += dials[i];
                printf("%d\n", ttl_dials);
                // printf("flat_pos: %d\n", flat_pos);
                // printf("%d\n", flats[flat_pos]);
        }

        return 0;
}

/*
// Creating a 2d array of flats (my first try)
   int flats[9][4];
   int x, y;
   int helper[] = {1, 11, 111, 1111};
   for (int row = 0; row < 9; row++) {
   for (int col = 0; col < 4; col++)
   flats[row][col] = helper[col] * (row + 1);
   }
*/
