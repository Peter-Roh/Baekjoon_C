#include <stdio.h>

int fac[14] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800, 39916800, 479001600};

int main(void)
{
	int N;

	scanf("%d", &N);

	printf("%d\n", fac[N]);

	return 0;
}