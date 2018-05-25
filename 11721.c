#include <stdio.h>
#include <string.h>

int main(void)
{
	char string[101];
	int i;

	scanf("%s", string);

	int N = 0;
	N = strlen(string);

	for(i = 0; i < N; i++)
	{
		printf("%c", string[i]);

		if((i + 1) % 10 == 0)
			printf("\n");
	}

	return 0;
}