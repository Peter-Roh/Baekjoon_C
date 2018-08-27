#include <stdio.h>

int gcd(long long int a, long long int b)
{
	return (b % a == 0) ? a : gcd(b % a, a);
}

int main(void)
{
	long long int A, B, G;

	scanf("%lld %lld", &A, &B);

	if(A > B)
	{
		G = gcd(B, A);

		if(G == 1)
		{
			printf("%lld\n", A * B);
		}
		else
		{
			printf("%lld\n", A * B / G);
		}
	}
	else
	{
		G = gcd(A, B);

		if(G == 1)
		{
			printf("%lld\n", A * B);
		}
		else
		{
			printf("%lld\n", A * B / G);
		}
	}

	return 0;
}