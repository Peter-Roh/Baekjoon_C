#include <stdio.h>

int Factorial(int n)
{
	if(n == 1 || n == 0)
	{
		return 1;
	}
	else
	{
		return Factorial(n - 1) * n;
	}
}

int main(void)
{
	int N, K;
	int ans;

	scanf("%d %d", &N, &K);

	ans = Factorial(N) / (Factorial(N - K) * Factorial(K));

	printf("%d\n", ans);

	return 0;
}