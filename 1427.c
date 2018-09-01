#include <stdio.h>
#include <string.h>

int main(void)
{
	char ch;
	int num[11] = {0};
	int i;

	while(scanf("%c", &ch) != EOF)
	{
		num[ch - 48]++;
	}

	for(i = 9; i >= 0; i--)
	{
		while(num[i]--)
		{
			printf("%d", i);
		}
	}

	return 0;
}