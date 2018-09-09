#include <stdio.h>

int main(void)
{
	int N, i, input, index;
	int count[10001] = {0};

	scanf("%d", &N);

	for(i = 0; i < N; i++)
	{
		scanf("%d", &input);
		count[input]++;
	}

	for(i = 1; i <= 10000; i++)
	{
		count[i] += count[i - 1];
	}

	for(i = 1; i <= 10000; i++)
	{
		index = count[i]  - count[i - 1];

		if(i == 1)
		{
			index = count[i];
		}

		while(index--)
		{
			printf("%d ", i);
		}
	}

	return 0;
}