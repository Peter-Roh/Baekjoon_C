#include <stdio.h>
#include <math.h>

int main(void)
{
	int M, N, i, j;
	int k = 0;

	scanf("%d %d", &M, &N);

	for(i = M; i <= N; i++)
	{
		if(i == 1)
			continue;

		float f = sqrt((float)i);

		for(j = 2; (float)j <= f; j++)
		{
			if(i % j == 0)
			{
				k++;
			}
		}
		if(k == 0)
		{
			printf("%d\n", i);
		}

		k = 0;
	}

	return 0;
}