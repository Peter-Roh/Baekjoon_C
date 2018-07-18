#include<stdio.h>

int main()
{
	int n, k;
	int t = 100, i = 0;

	scanf("%d", &n);

	if (n < 10)
	{
		n *= 10;
	}

	k = n;

	while (k != t)
	{
		t = (n % 10) * 10 + ((n / 10) + (n % 10)) % 10;
		n = t;
		i++;

	}

	printf("%d\n", i);

	return 0;
}