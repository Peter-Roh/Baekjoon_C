#include <stdio.h>

int main(void)
{
	int N, a, b, cnt = 0;

	scanf("%d %d %d", &N, &a, &b);

	while(a != b)
	{
		a = a - a / 2;
		b = b - b / 2;

		cnt++;
	}

	printf("%d\n", cnt);

	return 0;
}