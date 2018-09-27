#include <stdio.h>

int main(void)
{
	int T, H, W, N;
	int Y, X = 0;

	scanf("%d", &T);

	while(T--)
	{
		scanf("%d %d %d", &H, &W, &N);

		if(N % H != 0)
		{
			Y = N % H;
			X = (N - Y) / H + 1;
		}
		else
		{
			Y = H;
			X = N / H;
		}

		printf("%d%02d\n", Y, X);
	}

	return 0;
}