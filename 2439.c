#include<stdio.h>
int main(void)
{
	int n, i, j, k;

	scanf("%d", &n);

	for (i = n; i >= 1; i--)
	{
		for (j = 1; j < i; j++)
		{
			printf(" ");
		}
		for (k = i; k <= n; k++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;

}