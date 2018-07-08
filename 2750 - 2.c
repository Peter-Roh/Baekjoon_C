#include <stdio.h>
#include <string.h>

void InsertionSort(int DataSet[], int Length)
{
	int i = 0;
	int j = 0;
	int temp = 0;

	for(i = 1; i < Length; i++)
	{
		if(DataSet[i - 1] <= DataSet[i])
		{
			continue;
		}

		temp = DataSet[i];

		for(j = 0; j < i; j++)
		{
			if(DataSet[j] > temp)
			{
				memmove(&DataSet[j + 1], &DataSet[j], sizeof(DataSet[0]) * (i - j));
				DataSet[j] = temp;
				break;
			}
		}
	}
}

int main(void)
{
	int N, i;
	int arr[1001];

	scanf("%d", &N);

	for(i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}

	InsertionSort(arr, N);

	for(i = 0; i < N; i++)
	{
		printf("%d\n", arr[i]);
	}

	return 0;
}