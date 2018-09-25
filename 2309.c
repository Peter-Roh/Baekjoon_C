#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
	int num1 = *(int*)a;
	int num2 = *(int*)b;

	if(num1 < num2)
	{
		return -1;
	}

	if(num1 > num2)
	{
		return 1;
	}

	return 0;
}

int main(void)
{
	int dwarf[10];
	int i, j;
	int sum = 0, temp;
	int flag = 0;

	for(i = 0; i < 9; i++)
	{
		scanf("%d", &dwarf[i]);
	}

	qsort(dwarf, sizeof(dwarf) / sizeof(int), sizeof(int), compare);

	for(i = 0; i < 9; i++)
	{
		sum += dwarf[i];
	}

	for(i = 0; i < 8; i++)
	{
		for(j = i; j < 9; j++)
		{
			temp = dwarf[i] + dwarf[j];

			if(sum - temp == 100 && flag == 0)
			{
				dwarf[i] = 0;
				dwarf[j] = 0;
				flag = 1;
				break;
			}
		}
	}

	for(i = 0; i < 9; i++)
	{
		if(dwarf[i] != 0)
		{
			printf("%d\n", dwarf[i]);
		}
	}

	return 0;
}