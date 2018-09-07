#include <stdio.h>

int max(int a, int b)
{
	if(a >= b)
		return a;
	else
		return b;
}

int main(void)
{
	int n, i, j, sol = 0;
	int tri[501][501], ans[501][501];

	scanf("%d", &n);

	for(i = 0; i < n; i++)
	{
		for(j = 0; j < (i + 1); j++)
		{
			scanf("%d", &tri[i][j]);
		}
	}

	ans[0][0] = tri[0][0];

	for(i = 1; i < n; i++)
	{
		ans[i][0] = tri[i][0] + ans[i - 1][0];
	}

	for(i = 1; i < n; i++)
	{
		ans[i][i] = tri[i][i] + ans[i - 1][i - 1];
	}

	for(i = 2; i < n; i++)
	{
		for(j = 1; j < (i + 1); j++)
		{
			if(ans[i][j] == 0)
			{
				ans[i][j] = max(ans[i - 1][j - 1], ans[i - 1][j]) + tri[i][j];
			}
		}
	}

	for(j = 0; j < n; j++)
	{
		if(sol < ans[n - 1][j])
		{
			sol = ans[n - 1][j];
		}
	}

	printf("%d\n", sol);

	return 0;
}