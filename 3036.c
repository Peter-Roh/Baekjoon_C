#include <stdio.h>

int gcd(int a, int b)
{
	return (b % a == 0) ? a : gcd(b % a, a);
}

int main(void)
{
	int N, i, G, A, B;
	int rad[101];

	scanf("%d", &N);

	for(i = 0; i < N; i++)
	{
		scanf("%d", &rad[i]);
	}

	for(i = 0; i < N - 1; i++)
	{
		if(rad[0] > rad[i + 1])
		{
			G = gcd(rad[i + 1], rad[0]);
		}
		else
		{
			G = gcd(rad[0], rad[i + 1]);
		}

		A = rad[0] / G;
		B = rad[i + 1] / G;

		printf("%d/%d\n", A, B);
	}

	return 0;
}