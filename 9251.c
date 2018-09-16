#include <stdio.h>
#include <string.h>

int main(void)
{
	char strA[1002], strB[1002];
	int lenA, lenB;
	int i, j;
	int ans[1002][1002] = {0};

	scanf("%s %s", strA, strB);

	lenA = strlen(strA);
	lenB = strlen(strB);

	for(i = 1; i <= lenA; i++)
	{
		for(j = 1; j <= lenB; j++)
		{
			if(strA[i - 1] == strB[j - 1])
			{
				ans[i][j] = ans[i - 1][j - 1] + 1;
			}
			else
			{
				if(ans[i - 1][j] <= ans[i][j - 1])
				{
					ans[i][j] = ans[i][j - 1];
				}
				else
				{
					ans[i][j] = ans[i - 1][j];
				}
			}
		}
	}

	printf("%d\n", ans[lenA][lenB]);

	return 0;
}