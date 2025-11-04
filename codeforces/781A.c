#include <stdio.h>

int main(void)
{
        int a, b;
        scanf("%d %d", &a, &b); 
        
        int yrs;

        while(a <= b) {
                ++yrs;
                a *= 3;
                b *= 2;
        }

        printf("%d\n", yrs);

        return 0;
}
