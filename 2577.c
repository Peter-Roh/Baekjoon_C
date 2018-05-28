#include <stdio.h>

int main(void)
{
	int A, B, C;
	int i;
	int cnt[11] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

	scanf("%d %d %d", &A, &B, &C);

	int ans = A * B * C;

	while(ans)
	{
		cnt[ans % 10]++;
		ans /= 10;
	}

	for(i = 0; i < 10; i++)
	{
		printf("%d\n", cnt[i]);
	}

	return 0;
}