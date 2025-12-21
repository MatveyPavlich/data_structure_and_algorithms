#include <stdio.h>
#define FLOORS 9 
#define ROOMS 4 
#define FLATS (FLOORS * ROOMS)

int main(void)
{
        // Setup
        // Create an array of all possible flats to look up
        int flats[FLATS];
        int helper[] = {1, 11, 111, 1111};
        for (int i = 0; i < FLATS; i++) {
                flats[i] = helper[i % ROOMS] * ((i / ROOMS) + 1);
                // printf("flats[%d] = %d\n", i, arr[i]);
        }
        // Calculate how much dials each flat takes
        int dials[FLATS];
        for (int flat = 0; flat < FLATS; flat++) {
                dials[flat] = (flat % ROOMS) + 1;
                // printf("Flat %d (%d) score: %d\n", flats[flat], flat, dials[flat]);
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
                for (int i = 0; i <= flat_pos; i++) ttl_dials += dials[i];
                printf("%d\n", ttl_dials);
        }

        return 0;
}

/*
// Creating a 2d array of flats (my first try)
   int flats[FLOORS][ROOMS];
   int x, y;
   int helper[] = {1, 11, 111, 1111};
   for (int row = 0; row < FLOORS; row++) {
   for (int col = 0; col < ROOMS; col++)
   flats[row][col] = helper[col] * (row + 1);
   }
*/
