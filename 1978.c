#include <stdio.h>

int main(void)
{
	int N, i, j;
	int num[101];
	int cnt = 0;
	int k = 0;

	scanf("%d", &N);

	for(i = 0; i < N; i++)
	{
		scanf("%d", &num[i]);
	}

	for(i = 0; i < N; i++)
	{
		for(j = 1; j <= num[i]; j++)
		{
			if(num[i] % j == 0)
			{
				k++;
			}
		}
		if(k == 2)
		{
			cnt++;
		}

		k = 0;
	}

	printf("%d\n", cnt);

	return 0;
}