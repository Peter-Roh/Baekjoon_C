#include <stdio.h>

int min_2(int a, int b)
{
	if(a <= b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

int min_3(int a, int b, int c)
{
	if((a <= b && b <= c) || (a <= c && c <= b))
	{
		return a;
	}
	else if((b <= a && a <= c) || (b <= c && c <= a))
	{
		return b;
	}
	else
	{
		return c;
	}
}

int main(void)
{
	int N, i, ans;
	int RGB[1001][3];

	scanf("%d", &N);

	for(i = 0; i < N; i++)
	{
		scanf("%d %d %d", &RGB[i][0], &RGB[i][1], &RGB[i][2]);
	}

	for(i = 1; i < N; i++)
	{
		RGB[i][0] += min_2(RGB[i - 1][1], RGB[i - 1][2]);
		RGB[i][1] += min_2(RGB[i - 1][0], RGB[i - 1][2]);
		RGB[i][2] += min_2(RGB[i - 1][0], RGB[i - 1][1]);
	}

	ans = min_3(RGB[N - 1][0], RGB[N - 1][1], RGB[N - 1][2]);

	printf("%d\n", ans);

	return 0;
}