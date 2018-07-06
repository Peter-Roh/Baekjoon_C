#include <stdio.h>
#include <string.h>

int main(void)
{
	int i, j, N;
	char str[101], test[101];
	int alph[27] = {0};
	char temp;
	int len = 0;
	int cnt = 0;

	scanf("%d", &N);

	for(i = 0; i < N; i++)
	{
		scanf("%s", str);
		len = strlen(str);

		for(j = 0; j < len; j++)
		{
			if(j == 0)
			{
				temp = str[0];
				test[0] = temp;
			}

			if(str[j - 1] == str[j])
			{
				test[j] = ' ';
			}
			else if(str[j - 1] != str[j])
			{
				temp = str[j];
				test[j] = temp;
			}
		}

		for(j = 0; j < len; j++)
		{
			if(test[j] == ' ')
				continue;

			alph[test[j] - 'a']++;
		}

		for(j = 0; j < 26; j++)
		{
			if(alph[j] > 1)
			{
				cnt--;
				break;
			}
		}

		cnt++;
		memset(alph, 0, sizeof(int) * 26);
	}

	printf("%d\n", cnt);

	return 0;
}