#include <stdio.h>

int main(void) {
        
        int n;
        scanf("%d", &n);
        char s[100001];
        scanf("%s", s);
        
        int a = 0;
        int d = 0;

        for (int i = 0; s[i] != '\0'; i++) {
                if (s[i] == 'A') a++;
                else d++;
        }

        if (a > d) printf("Anton\n");
        else if (a < d) printf("Danik\n");
        else printf("Friendship\n");

        return 0;
}
