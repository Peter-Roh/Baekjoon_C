#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[1000001];
	int ans[27];
	int i;
	int max = 0;
	char sol = 0;

	scanf("%s", str);
	memset(ans, 0, sizeof(int) * 27);
	int len = strlen(str);

	for(i = 0; i < len; i++)
	{
		if('a' <= str[i] && str[i] <= 'z')
		{
			ans[str[i] - 'a']++;
		}
		else
		{
			ans[str[i] - 'A']++;
		}
	}

	for(i = 0; i < 26; i++)
	{
		if(max < ans[i])
		{
			max = ans[i];
			sol = i + 'A';
		}
		else if(max == ans[i])
		{
			sol = '?';
		}
	}

	printf("%c", sol);

	return 0;
}