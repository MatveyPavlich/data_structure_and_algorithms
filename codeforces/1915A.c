#include <stdio.h>

int main(void) {
        int t;
        scanf("%d", &t);
        int arr[t];
        int a, b, c;
        for (int i = 0; i < t; i++) {
                scanf("%d %d %d", &a, &b, &c);
                arr[i] = a ^ b ^ c; 

                /* ======================================
                * Way 1: My initial method
                * if      (a == b) arr[i] = c;
                * else if (a == c) arr[i] = b;
                * else             arr[i] = a;
                *   
                * // Way 2: ternary logic
                * arr[i] = (a == b ? c : (a == c ? b : a));
                * 
                * // Way 3; using bitwise XOR (coldest...)
                * arr[i] = a ^ b ^ c; 
                * ======================================*/
        }

        for (int i = 0; i < t; i++)
                printf("%d\n", arr[i]);
                
        return 0;
}
