#include <stdio.h>
#include <string.h>

int main(void) {
        char name[101];
        scanf("%s", name);

        int distinct[26] = {0};
        int count = 0;

        for (int i = 0; name[i] != '\0'; i++) {
                int idx = name[i] - 'a';  // map 'a' → 0, 'b' → 1, etc.
                if (!distinct[idx]) {
                        distinct[idx] = 1;
                        count++;
                }
        }

        if (count % 2 == 0)
                printf("CHAT WITH HER!\n");
        else
                printf("IGNORE HIM!\n");

        return 0;
}
