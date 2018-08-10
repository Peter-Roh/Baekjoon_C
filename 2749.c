#include <stdio.h>

int main(void)
{
	unsigned long long N;
	int i;
	int fibonacci[1500001] = {0, 1};

	for(i = 2; i <= 1500000; i++)
	{
		fibonacci[i] = (fibonacci[i - 1] + fibonacci[i - 2]) % 1000000;
	}

	scanf("%lld", &N);

	printf("%d\n", fibonacci[N % 1500000]);

	return 0;
}