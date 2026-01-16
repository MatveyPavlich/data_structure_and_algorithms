#include <stdio.h>

int main(void)
{
        int t;
        scanf("%d", &t);
        int s1[2];
        int s2[2];
        while (t--) {
                scanf("%d %d %d %d", s1, (s1 + 1), s2, (s2 + 1)); 
                if (s1[1] < s1[0]) {
                        int temp = s1[0];
                        s1[0] = s1[1];
                        s1[1] = temp;
                }
                if (s2[1] < s2[0]) {
                        int temp = s2[0];
                        s2[0] = s2[1];
                        s2[1] = temp;
                }
                int *winner = s1[1] > s2[1] ? s1 : s2;
                int *loser = s1[1] > s2[1] ? s2 : s1;
                // printf("Winner: %d | Loser: %d\n", (int)(*(winner + 1)),
                //                 (int)(*(loser + 1)));

                if (*(winner) < *(loser + 1))
                        printf("YES\n");
                else
                        printf("NO\n");
        }

        return 0;
}
