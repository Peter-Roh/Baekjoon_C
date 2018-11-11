#include <stdio.h>

int main(void)
{
	int N, i, j, temp = 0;
	int height[51], weight[51], ans[51] = {0};

	scanf("%d", &N);

	for(i = 0; i < N; i++)
	{
		scanf("%d %d", &weight[i], &height[i]);
	}

	for(i = 0; i < N; i++)
	{
		for(j = 0; j < N; j++)
		{
			if(weight[j] > weight[i] && height[j] > height[i])
			{
				temp++;
			}
		}

		ans[i] = temp + 1;
		temp = 0;
	}

	for(i = 0; i < N; i++)
	{
		printf("%d\n", ans[i]);
	}

	return 0;
}