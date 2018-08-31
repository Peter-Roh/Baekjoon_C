#include <stdio.h>

int main(void)
{
	int k, n, T, i, j;
	int num[15][15] = {0};

	scanf("%d", &T);

	for(i = 1; i < 15; i++)
	{
		num[0][i] = i;
	}

	num[1][1] = 1;

	for(i = 1; i < 15; i++)
	{
		for(j = 1; j < 15; j++)
		{
			num[i][j] = num[i - 1][j] + num[i][j - 1];
		}
	}

	while(T--)
	{
		scanf("%d %d", &k, &n);
		printf("%d\n", num[k][n]);
	}

	return 0;
}