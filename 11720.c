#include <stdio.h>

int main(void)
{
	int n;
	int i;
	char arr[101];
	int sum = 0;

	scanf("%d %s", &n, arr);

	for(i = 0; i < n; i++)
	{
		sum += arr[i] - '0';
	}

	printf("%d\n", sum);

	return 0;
}