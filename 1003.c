#include <stdio.h>

int memo[41] = {1, 1};

int count(int n)
{
	if(n <= 1)
		return memo[n];
	else
	{
		if(memo[n] > 0)
			return memo[n];

		return memo[n] = count(n - 1) + count(n - 2);
	}
}

int main(void)
{
	int T, N;

	scanf("%d", &T);

	while(T--)
	{
		scanf("%d", &N);

		if(N == 0)
		{
			printf("1 0\n");
		}
		else if(N == 1)
		{
			printf("0 1\n");
		}
		else
		{
			count(N);
			printf("%d %d\n", memo[N - 2], memo[N - 1]);
		}
	}

	return 0;
}