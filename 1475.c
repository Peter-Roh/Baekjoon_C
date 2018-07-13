#include <stdio.h>

int main(void)
{
	int cnt[11] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int N, i;
	int max = 0;

    scanf("%d", &N);

	if(N == 0)
	{
		cnt[0] = 1;
	}

	while(N)
	{
		cnt[N % 10]++;
		N /= 10;
	}

	cnt[6] = (cnt[6] + cnt[9] + 1) / 2;

	for(i = 0; i < 9; i++)
	{
		if(max < cnt[i])
		{
			max = cnt[i];
		}
	}

	printf("%d\n", max);

	return 0;
}