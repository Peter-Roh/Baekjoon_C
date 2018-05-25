#include<stdio.h>
int main(void)
{
	int N;
	int x = 0;
	int	y;
	int sum;

	scanf("%d", &N);

	for (x = 0; N >= 0; x++)
	{
		if (N % 5 == 0)
		{
			sum = x + N / 5;
			break;
		}
		else
		{
			N = N - 3;

		}
	}

	if (N < 0)
		sum = -1;

	printf("%d\n", sum);

	return 0;

}
