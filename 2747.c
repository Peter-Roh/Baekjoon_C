#include<stdio.h>
int main(void)
{
	int i, n;
	int F = 1;
	int sum = 1;

	scanf("%d", &n);
	
	for (i = 2; i <= n; i++)
	{
		sum += F;
		F = sum - F;
		
	}

	printf("%d\n", F);

	return 0;

}