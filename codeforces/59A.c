#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
        char s[101];
        scanf("%s", s);

        int l = 0, u = 0;
        for (int i = 0; s[i] != '\0'; i++) {
                if(islower(s[i]))
                        l++;
                else
                        u++;
        }

        if(l >= u) {
                for(int i = 0; s[i] != '\0'; i++)
                        s[i] = tolower(s[i]);
        }
        else {
                for(int i = 0; s[i] != '\0'; i++)
                        s[i] = toupper(s[i]);
        }

        printf("%s\n", s);
        return 0;

}
