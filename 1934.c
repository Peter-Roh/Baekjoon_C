#include <stdio.h>

int gcd(int a, int b)
{
	return (b % a == 0) ? a : gcd(b % a, a);
}

int main(void)
{
	int T, A, B, G;

	scanf("%d", &T);

	while(T--)
	{
		scanf("%d %d", &A, &B);

		G = gcd(A, B);

		printf("%d\n", A * B / G);
	}

	return 0;
}