#include <stdio.h>

int gcd(int m, int n)
{
	return n ? gcd(n, m % n) : m;
}

int lcm(int m, int n)
{
	return m * n / gcd(m, n);
}

int main(void)
{
	int T;
	int M, N, x, y;
	int num;

	scanf("%d", &T);

	while(T--)
	{
		scanf("%d %d %d %d", &M, &N, &x, &y);

		num = lcm(M, N);

		while(x != y && x <= num)
		{
			if(x < y)
			{
				x += M;
			}
			else
			{
				y += N;
			}
		}

		if(x != y)
		{
			printf("-1\n");
		}
		else
		{
			printf("%d\n", x);
		}
	}

	return 0;
}