#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int N, i;
	double mean = 0;

	scanf("%d", &N);

	int num[1000];
	double changed[1000];
	int max = 0;

	for(i = 0; i < N; i++)
	{
		scanf("%d", &num[i]);
	}

	for(i = 0; i < N; i++)
	{
		if(max <= num[i])
		{
			max = num[i];
		}
	}

	for(i = 0; i < N; i++)
	{
		changed[i] = (num[i] / (double)max) * 100;
		mean += changed[i];
	}

	mean = (double)mean / (double)N;

	printf("%.2f\n", mean);

	return 0;
}