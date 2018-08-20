#include <stdio.h>

int main(void)
{
	int X, i = 0, ans = 0;
	int binary[8];

	scanf("%d", &X);

	while(1)
	{
		binary[i] = X % 2;
		X /= 2;
		i++;

		if(X == 0)
		{
			break;
		}
	}

	while(i--)
	{
		ans += binary[i];
	}

	printf("%d\n", ans);

	return 0;
}