/* ========================================================================
 * Learnings:
 * 1. char arr[t * 5] can hold only one sting, for multiple use char arr[t][5]
 * 2. You can't assign array directly to a sting (arr = "YES\n")
 *      - Array is a pointer => need to copy values into array one by one
 *      - Use strcpy(array_pointer, "string")
 * 3. printf() is buffered => used fflush in the loop to display stuff instantly 
 * ========================================================================*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
        int t;
        scanf("%d", &t);
        char temp[5];
        // char arr[t * 5]; // Wrong since packing multiple strings into one
        char arr[t][5];
        for (int i = 0; i < t; i++) {
                scanf("%s", temp);
                for (int j = 0; j < 3; j++)
                        temp[j] = tolower(temp[j]);
                // printf("%s\n", temp); // Debugging
                // fflush(stdout);
                if (temp[0] == 'y' && temp[1] == 'e' && temp[2] == 's')
                        // arr[i] = "YES\n"; // Wrong, arrays can't be assigned
                        strcpy(arr[i], "YES\n");
                else
                        strcpy(arr[i], "NO\n");
        }

        for (int i = 0; i < t; i++)
                printf("%s", arr[i]);

        return 0;
}
