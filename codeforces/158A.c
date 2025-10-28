#include <stdio.h>

int main(void)
{
	
	int n, k;
	scanf("%d %d", &n, &k);

	char scores[(2 * n + 2)];
	scanf("%s", scores);

	printf("%s\n", scores);

	return 0;
}
