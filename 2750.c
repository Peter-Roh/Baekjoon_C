#include <stdio.h>

void BubbleSort(int DataSet[], int Length)
{
	int i = 0;
	int j = 0;
	int temp = 0;
	int flag;

	for(i = 0; i < Length - 1; i++)
	{
		flag = 0;

		for(j = 0; j < Length - (i + 1); j++)
		{
			if(DataSet[j] > DataSet[j + 1])
			{
				temp = DataSet[j + 1];
				DataSet[j + 1] = DataSet[j];
				DataSet[j] = temp;
				flag = 1;
			}
		}

		if(flag == 0)
		{
			break;
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

	BubbleSort(arr, N);

	for(i = 0; i < N; i++)
		printf("%d\n", arr[i]);

	return 0;
}