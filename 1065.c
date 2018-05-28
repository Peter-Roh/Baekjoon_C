#include<stdio.h>

int N;
int num;
int a, b, c;
int i;

void func(int N)
{
	a = N / 100;
	b = (N - a * 100) / 10;
	c = (N - a * 100 - b * 10);

}


int main(void)
{
	scanf("%d", &N);

	if (N <= 99)
		num = N;

	else if (N < 1000)
	{
		num = 99;

		for (i = 100; i <= N; i++)
		{
			func(i);

			if ((a - b) == (b - c))
			{
				num++;

			}
		}
	}
	else if (N == 1000)
		num = 144;

	printf("%d\n", num);

	return 0;

}