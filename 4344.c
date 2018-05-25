#include <stdio.h>

int main(void)
{
	int C;
	int i, j, k, n;
	int num[1001];

	scanf("%d", &C);

	for(i = 0; i < C; i++)
	{
		int cnt = 0;
		int sum = 0;
		double mean = 0.0;
		double answer;

		scanf("%d", &n);

		for(j = 0; j < n; j++)
		{
			scanf("%d", &num[j]);
			sum += num[j];
		}

		mean = (double)sum / (double)n;

		for(k = 0; k < n; k++)
		{
			if(mean < num[k])
			{
				cnt++;
			}
		}

		answer = (double)cnt / (double)n * 100;
		printf("%.3lf%%\n", answer);
		cnt = 0;
	}

	return 0;
}