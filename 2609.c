#include <stdio.h>

int gcd(int a, int b)
{
	return (b % a == 0) ? a : gcd(b % a, a);
}

int main(void)
{
	int A, B, G;

	scanf("%d %d", &A, &B);

	if(A > B)
	{
		G = gcd(B, A);

		printf("%d\n", G);
		printf("%d\n", A * B / G);
	}
	else
	{
		G = gcd(A, B);

		printf("%d\n", G);
		printf("%d\n", A * B / G);
	}

	return 0;
}