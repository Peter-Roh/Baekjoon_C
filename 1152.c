#include <stdio.h>
#include <string.h>

int main(void)
{
	int  i, j;
	char str[1000001];
	int cnt = 0;

	for(j = 0; j < 1000001; j++)
	{
		scanf("%c", &str[j]);

		if(str[j] == 10)
			break;
	}

	for (i = 0; i < strlen(str); i++)
		if (i == 0 && str[i] == 10)
			break;
		else if(i == 0 && str[i] != 10)
			continue;
		else if (str[i - 1] != ' ' && str[i] == ' ')
			cnt++;
		else if (str[i] == 10)
		{
			cnt++;

			if (str[i - 1] == ' ')
				cnt--;

			break;
		}

	printf("%d\n", cnt);
}