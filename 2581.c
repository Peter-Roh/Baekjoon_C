#include <stdio.h>

int main(void)
{
	int M, N, i, j;
	int min = 0;
	int sum = 0;
	int cnt = 0;
	int k = 0;

	scanf("%d %d", &M, &N);

	for(i = M; i <= N; i++)
	{
		for(j = 1; j <= i; j++)
		{
			if(i % j == 0)
			{
				k++;
			}
		}
		if(k == 2)
		{
			sum += i;
			cnt++;

			if(cnt == 1)
				min = i;
		}

		k = 0;
	}

	if(cnt >= 1)
	{
		printf("%d\n", sum);
		printf("%d\n", min);
	}
	else
	{
		printf("-1\n");
	}

	return 0;
}