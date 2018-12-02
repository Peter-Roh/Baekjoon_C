#include <stdio.h>

int main(void)
{
	int N, K, i;
	int num[11];
	int cnt = 0;

	scanf("%d %d", &N, &K);

	for(i = 1; i <= N; i++)
	{
		scanf("%d", &num[i]);
	}

	for(i = N; i > 0; i--)
	{
		cnt += K / num[i];
		K %= num[i];
	}

	printf("%d\n", cnt);

	return 0;
}