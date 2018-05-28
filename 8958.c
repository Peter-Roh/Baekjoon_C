#include <stdio.h>

int main(void)
{
	int i, n;
	char str[80];
	int cnt = 0;
	int ans = 0;

	scanf("%d", &n);

	while(n--)
	{
		scanf("%s", str);

		for(i = 0; str[i] != '\0'; i++)
		{
			if(str[i] == 'O')
			{
				cnt++;
				ans += cnt;
			}
			else
			{
				cnt = 0;
			}
		}

		printf("%d\n", ans);

		cnt = 0;
		ans = 0;
	}

	return 0;
}