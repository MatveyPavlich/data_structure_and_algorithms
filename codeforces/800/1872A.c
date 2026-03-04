#include <stdio.h>

int main(void)
{
        int t, a, b, c;
        scanf("%d", &t);
        while (t--) {
                scanf("%d %d %d", &a, &b, &c);
                if (a < b) {
                        int temp = a;
                        a = b;
                        b = temp;
                }
                int out = 0;
                while (a != b) {
                        if (a - b > 2 * c) {
                                a -= c;
                                b += c;
                                out++;
                                if (a < b) {
                                        int temp = a;
                                        a = b;
                                        b = temp;
                                }
                        }
                        else {
                                if (a != b)
                                        out++;
                                break;
                        }
                }
                printf("%d\n", out); 
        }
        return 0;
}
