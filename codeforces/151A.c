#include <stdio.h>

int main(void) {
        int n, k, l, c, d, p, nl, np;
        scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);

        int total_drink = k * l;
        int total_slices = c * d;
        int toasts_from_drink = total_drink / nl;
        int toasts_from_limes = total_slices;
        int toasts_from_salt = p / np;

        int min_toasts = toasts_from_drink;
        if (toasts_from_limes < min_toasts) min_toasts = toasts_from_limes;
        if (toasts_from_salt < min_toasts) min_toasts = toasts_from_salt;

        printf("%d\n", min_toasts / n);

        return 0;
}
