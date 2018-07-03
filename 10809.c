#include <stdio.h>
#include <string.h>

int main(void)
{
	int ans[27];
	char S[101];
	int i;

	scanf("%s", S);

	memset(ans, -1, sizeof(int) * 26);

	for(i = 0; i < strlen(S); i++)
	{
		if(ans[S[i] - 'a'] == -1)
			ans[S[i] - 'a'] = i;
	}

	for(i = 0; i < 26; i++)
		printf("%d ", ans[i]);

	return 0;
}