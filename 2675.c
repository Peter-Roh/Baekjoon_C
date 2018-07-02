#include <stdio.h>
#include <string.h>

int main(void)
{
	int T;
	int i, j, k;
	int R;
	char str[21];

	scanf("%d", &T);

	for(i = 0; i < T; i++)
	{
		scanf("%d %s", &R, str);

		for(j = 0; j < strlen(str); j++)
		{
			for(k = 0; k < R; k++)
			{
				printf("%c", str[j]);
			}
		}

		printf("\n");
	}

	return 0;
}