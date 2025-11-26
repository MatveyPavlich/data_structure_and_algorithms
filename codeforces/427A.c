#include <stdio.h>

int main(void) {
        long n;
        scanf("%ld", &n);

        int crimes = 0;
        int event = 0;
        int policeman = 0;
        for (int i = 0; i < n; i++) {
                scanf("%d", &event);
                if (event == -1 && policeman == 0)
                        crimes++;
                else if (event >= 1)
                        policeman += event;
                else if (event == -1 && policeman > 0)
                        policeman--;
        }
        printf("%d\n", crimes);
        return 0;
}
