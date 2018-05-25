#include <stdio.h>

int main(void)
{
	int n, i, x;
	int arr[10001];

	scanf("%d %d", &n, &x);

	for(i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	for(i = 0; i < n; i++)
	{
		if(x > arr[i])
		{
			printf("%d ", arr[i]);
		}
	}

	return 0;
}