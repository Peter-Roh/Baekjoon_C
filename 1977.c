#include <stdio.h>

int isPSN[10001] = {0};

void PSN()
{
	int i;

	for(i = 1; i <= 100; i++)
	{
		isPSN[i * i] = 1;
	}
}

int main(void)
{
	int M, N, i;
	int sum = 0;
	int min = 0;

	scanf("%d %d", &M, &N);

	PSN();

	for(i = M; i <= N; i++)
	{
		if(isPSN[i] == 1 && min == 0)
		{
			min += i;
		}

		if(isPSN[i] == 1)
		{
			sum += i;
		}
	}

	if(sum == 0)
	{
		printf("-1\n");
	}
	else
	{
		printf("%d\n", sum);
		printf("%d\n", min);
	}

	return 0;
}