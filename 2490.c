#include <stdio.h>

int main(void)
{
	int play[5];
	int i, j, cnt = 0;

	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 4; j++)
		{
			scanf("%d", &play[j]);
			cnt += play[j];
		}

		if(cnt == 0)
		{
			printf("D\n");
		}
		else if(cnt == 1)
		{
			printf("C\n");
		}
		else if(cnt == 2)
		{
			printf("B\n");
		}
		else if(cnt == 3)
		{
			printf("A\n");
		}
		else if(cnt == 4)
		{
			printf("E\n");
		}

		cnt = 0;
	}

	return 0;
}