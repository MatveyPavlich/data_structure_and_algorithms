#include <stdio.h>

int main(void)
{
        int t;
        scanf("%d", &t);
        char s[6];
        while (t--) {
                scanf("%s", s);
                int hours = (s[0] - '0') * 10 + (s[1] - '0');
                // int hours = atoi(&s[0]) * 10 + atoi(&s[1]);
                if (hours == 0)
                        printf("12:%c%c AM\n", s[3], s[4]);
                else if (hours < 12)
                        printf("%s AM\n", s);
                else if (hours == 12)
                        printf("12:%c%c PM\n", s[3], s[4]);
                else if (hours < 22)
                        printf("0%d:%c%c PM\n", (hours - 12), s[3], s[4]);
                else
                        printf("%d:%c%c PM\n", (hours - 12), s[3], s[4]);
        }
        return 0;
}

/* GPTs solution:
int main(void)
{
        int t;
        scanf("%d", &t);

        char s[6];
        while (t--) {
                scanf("%s", s);

                int h24 = (s[0] - '0') * 10 + (s[1] - '0');
                int h12 = h24 % 12;
                if (h12 == 0) h12 = 12;

                printf("%02d:%c%c %s\n",
                                h12,
                                s[3], s[4],
                                h24 < 12 ? "AM" : "PM");
        }
        return 0;
}
*/
