#include<stdio.h>
int main(void)
{
	int n, i, j, k;

	scanf("%d", &n);

	for(i = 0; i < n; i++)
	{
		for (j = i; j > 0; j--)
		{
			printf(" ");
		}
		for (k = n; k > i; k --)
		{
			printf("*");
		}
		printf("\n");
	}


	return 0;

}