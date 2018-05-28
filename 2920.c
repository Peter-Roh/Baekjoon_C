#include <stdio.h>

int main(void)
{
	int arr[9];
	int i;
	int asc = 0;
	int des = 0;

	for(i = 0; i < 8; i++)
	{
		scanf("%d", &arr[i]);

		if(arr[i] == i + 1)
			asc++;
		else if(arr[i] == 8 - i)
			des++;
	}

	if(asc == 8)
		printf("ascending\n");
	else if(des == 8)
		printf("descending\n");
	else
		printf("mixed\n");

	return 0;
}