#include <stdio.h>

int notPrime[10001] = {1, 1};

void FindPrime()
{
	int i, j;

	for(i = 2; i * i < 10001; i++)
	{
		if(!notPrime[i])
		{
			for(j = i * i; j < 10001; j += i)
			{
				notPrime[j] = 1;
			}
		}
	}
}

int main(void)
{
	int T, i, j;
	int n = 0;
	int mid;

	scanf("%d", &T);

	FindPrime();

	while(T--)
	{
		scanf("%d", &n);

		mid = n / 2;

		if(n == 4)
		{
			printf("2 2\n");
		}
		else
		{
			for(i = mid, j = mid ; i > 2; i--, j++)
			{
				if(i % 2 == 1 && j % 2 == 1 && !notPrime[i] && !notPrime[j])
				{
					printf("%d %d\n", i, j);
					break;
				}
			}
		}
	}

	return 0;
}