#include <stdio.h>

int main(void)
{
        int n;
        scanf("%d", &n);
        int max_len = 0;
        int curr_len = 0;
        int prev_num = 0, curr_num = 0;
        while (n--) {
               scanf("%d", &curr_num);
               // printf("Current num: %d (vs previous %d)\n", curr_num, prev_num);
               if (curr_num >= prev_num) curr_len++;
               else {
                       if (curr_len > max_len) max_len = curr_len;
                       curr_len = 1;
                }
               // printf("Curr count: %d\n", curr_len);
               prev_num = curr_num;
        }
        if (curr_len > max_len) max_len = curr_len;
        printf("%d\n", max_len);
        return 0;
}
