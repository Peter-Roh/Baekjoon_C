#include <stdio.h>

int main(void)
{
	int N, X, Y, cnt = 0;

	scanf("%d %d %d", &N, &X, &Y);

	while(X != Y)
	{
		X = X - X / 2;
		Y = Y - Y / 2;

		cnt++;
	}

	printf("%d\n", cnt);

	return 0;
}