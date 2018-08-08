#include <stdio.h>

int Comb(int n, int k)
{
	if(k == 0 || n == k)
		return 1;
	else
	{
		return Comb(n - 1, k - 1) + Comb(n - 1, k);
	}
}

int main(void)
{
	int N, K;

	scanf("%d %d", &N, &K);

	printf("%d\n", Comb(N, K));

	return 0;
}