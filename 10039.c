#include<stdio.h>

int main(void)
{
	int test[6];
	int i;
	int sum = 0;

	for (i = 0; i < 5; i++)
	{
		scanf("%d", &test[i]);
	}
	
	for (i = 0; i<5; i++)
	{
		if (test[i] < 40)
			sum += 40;
		else
			sum += test[i];

	}
	
	printf("%d\n", sum / 5);

	return 0;

}