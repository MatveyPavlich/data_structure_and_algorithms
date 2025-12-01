#include <stdio.h>

int main(void)
{
	int k, n, w;
	scanf("%d %d %d", &k, &n, &w);
	
	int ttl = k * w * (w + 1) / 2;
        int borrow = ttl - n;
        if (borrow < 0)
                borrow = 0;
        printf("%d\n", borrow);

	return 0;
}
