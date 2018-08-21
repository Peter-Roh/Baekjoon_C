#include <stdio.h>

int main(void)
{
	int M, a, b, ans = 0;
	int ball[4] = {1, 0, 0};

	scanf("%d", &M);

	while(M--)
	{
		scanf("%d %d", &a, &b);

		if(ball[a - 1] == 1)
		{
			ball[a - 1] = 0;
			ball[b - 1] = 1;
		}
		else if(ball[b - 1] == 1)
		{
			ball[b - 1] = 0;
			ball[a - 1] = 1;
		}
	}

	if(ball[0] == 1)
	{
		ans = 1;
	}
	else if(ball[1] == 1)
	{
		ans = 2;
	}
	else if(ball[2] == 1)
	{
		ans = 3;
	}

	printf("%d\n", ans);

	return 0;
}