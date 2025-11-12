#include <stdio.h>

int main(void) {
        int n;
        scanf("%d", &n);

        int temp = 0;
        int score = 0;
        for (int i = 0; i < n; i++) {
               scanf("%d", &temp);
               score += temp;
        }
        
        if (score)
                printf("HARD\n");
        else
                printf("EASY\n");
        return 0;
}
