#include <stdio.h>
#define MAXN 200000

int a[MAXN]; // To store raw arrays


int main(void) {
        int t;
        scanf("%d", &t);
        int start[t];
        int len[t];
        int pos = 0;
        for (int i = 0; i < t; i++) {
                scanf("%d", &len[i]);
                start[i] = pos;
                for (int j = 0; j < len[i]; j++)
                        scanf("%d", &a[pos++]);
        }

        for (int i = 0; i < t; i++) {
                printf("%d\n", len[i]);
                for (int j = 0; j < len[i]; j++)
                        printf("%d ", a[start[i] + j]);
                printf("\n");
        }
                                
        return 0;
}
