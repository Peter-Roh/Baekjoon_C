#include <stdio.h>

int main(void)
{
	int X, i = 1, num;

	scanf("%d", &X);

	while(i * (i + 1) / 2 < X)
	{
		i++;
	}

	i--;

	num = X - i * (i + 1) / 2;

	if(i % 2 == 1)
	{
		printf("%d/%d\n", num, i + 2 - num);
	}
	else
	{
		printf("%d/%d\n", i + 2 - num, num);
	}

	return 0;
}