#include <stdio.h>
#define MAXN 200000

int a[MAXN]; // To store raw arrays

int main(void) {
        int t;
        // int output[t];   // store min value of the sum for each case
        scanf("%d", &t);
        int n[t];        // Store n for each test case 
        for (int i = 0; i < t; i++) {
                scanf("%d", &n[i]);
                for (int j = 0; j < n[i]; j++) {
                        scanf("%d", &a[j]);
                }
        }

        for (int i = 0; i < t; i++) {
                printf("%d\n", n[i]);
                for (int j = 0; j < n[i]; j++) printf("%d" , a[j]);
                printf("\n");
        }                        
                                
        return 0;
}
