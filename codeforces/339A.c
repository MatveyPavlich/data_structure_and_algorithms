#include <stdio.h>
#include <string.h>

int main(void) {
        char s[101];
        scanf("%s", s);

        int nums[100];  // to hold the numbers
        int n = 0;

        // Step 1: Extract digits
        for (int i = 0; s[i] != '\0'; i++) {
                if (s[i] != '+') {
                        nums[n++] = s[i] - '0';  // convert char to int
                }
        }

        // Step 2: Sort (simple bubble sort since n ≤ 100)
        for (int i = 0; i < n - 1; i++) {
                for (int j = 0; j < n - i - 1; j++) {
                        if (nums[j] > nums[j + 1]) {
                                int tmp = nums[j];
                                nums[j] = nums[j + 1];
                                nums[j + 1] = tmp;
                        }
                }
        }

        // Step 3: Print in sorted order joined by '+'
        for (int i = 0; i < n; i++) {
                printf("%d", nums[i]);
                if (i < n - 1)
                        printf("+");
        }
        printf("\n");

        return 0;
}
