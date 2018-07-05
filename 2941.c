#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[101];
	int cnt = 0;
	int i;

	scanf("%s", str);
	int len = strlen(str);

	for(i = 1; i < len; i++)
	{
		if(str[i] == '-')
		{
			if(str[i - 1] == 'c')
				cnt++;
			else if(str[i - 1] == 'd')
				cnt++;
		}

		if(str[i] == 'j')
		{
			if(str[i - 1] == 'l')
				cnt++;
			else if(str[i - 1] == 'n')
				cnt++;
		}

		if(str[i] == '=')
		{
			if(str[i - 1] == 'c')
				cnt++;
			else if(str[i - 1] == 's')
				cnt++;
			else if(str[i - 1] == 'z' && i - 2 >= 0 && str[i - 2] == 'd')
				cnt++;
			
			if(str[i - 1] == 'z')
				cnt++;
		}
	}

	printf("%d\n", len - cnt);

	return 0;
}