#include <stdio.h>

typedef struct {
        int pos;
        char num[200];
} Borz;

int main(void) {
        char arr[200];
        scanf("%s", arr);

        Borz b = {.pos = 0, .num = {0}};
        for (int i = 0; arr[i] != '\0'; i++) {
                if (arr[i] == '-' && arr[i+1] == '.') {
                                b.num[b.pos] = '1';
                                b.pos++;
                                i++;
                }
                else if (arr[i] == '-' && arr[i+1] == '-') {
                                b.num[b.pos] = '2';
                                b.pos++;
                                i++;
                }
                else if (arr[i] == '.') {
                                b.num[b.pos] = '0';
                                b.pos++;
                }
        }

        printf("%s\n", b.num); 

        return 0;
}
