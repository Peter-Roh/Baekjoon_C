#include<stdio.h>
int main(void)
{
	long long i, n;
	long long F = 1;
	long long sum = 1;

	scanf("%lld", &n);

	for (i = 2; i <= n; i++)
	{
		sum += F;
		F = sum - F;

	}

	printf("%lld\n", F);

	return 0;

}