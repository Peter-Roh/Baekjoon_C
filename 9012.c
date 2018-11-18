#include <stdio.h>
#include <string.h>

int main(void)
{
	int T, i, len;
	char par[51];
	int cnt = 0;
	int flag = 0;

	scanf("%d", &T);

	while(T--)
	{
		scanf("%s", par);
		len = strlen(par);

		if(len % 2 != 0)
		{
			printf("NO\n");
			continue;
		}

		for(i = 0; i < len; i++)
		{
			if(par[i] == '(')
			{
				cnt++;
			}
			else if(par[i] == ')')
			{
				cnt--;
			}

			if(cnt < 0)
			{
				printf("NO\n");
				flag = 1;
				break;
			}
		}

		if(cnt != 0 && flag == 0)
		{
			printf("NO\n");
		}
		else if(cnt == 0 && flag == 0)
		{
			printf("YES\n");
		}

		cnt = 0;
		flag = 0;
	}

	return 0;
}