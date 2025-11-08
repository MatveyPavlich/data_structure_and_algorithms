#include <stdio.h>
#include <string.h>

int main(void)
{
        char n[20];  // up to 10^18 → 18 digits max (+ '\0')
        scanf("%s", n);

        int count = 0;

        // Step 1: Count how many digits are lucky
        for (int i = 0; n[i] != '\0'; i++) {
                if (n[i] == '4' || n[i] == '7')
                        count++;
        }

        // Step 2: Check if count itself is lucky
        if (count == 0) {
                printf("NO\n");
                return 0;
        }

        int temp = count;
        int isLucky = 1;

        while (temp > 0) {
                int digit = temp % 10;
                if (digit != 4 && digit != 7) {
                        isLucky = 0;
                        break;
                }
                temp /= 10;
        }

        if (isLucky)
                printf("YES\n");
        else
                printf("NO\n");

        return 0;
}
