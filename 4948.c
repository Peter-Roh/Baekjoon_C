#include <stdio.h>
#include <math.h>

int main(void)
{
	int i, j, n;
	int k = 0;
	int cnt = 0;
	int arr[300000] = {0};
	float f;

	for(i = 2; i < 246913; i++)
	{
		f = sqrt((float)i);

		for(j = 2; (float)j <= f; j++)
		{
			if(i % j == 0)
			{
				k++;
			}
		}
		if(k == 0)
		{
			arr[i] = i;
		}

		k = 0;
	}

	while(1)
	{
		scanf("%d", &n);

		if(n == 0)
			break;

		for(i = n + 1; i <= 2 * n; i++)
		{
			if(arr[i] != 0)
			{
				cnt++;
			}
		}

		printf("%d\n", cnt);

		cnt = 0;
	}

	return 0;
}