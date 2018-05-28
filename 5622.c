#include <stdio.h>
#include <string.h>

int main(void)
{
	char S[16];
	int count = 0;
	int i;

	scanf("%s", S);

	for(i = 0; i < strlen(S); i++)
	{
		if(S[i] == 'A' || S[i] == 'B' || S[i] == 'C')
		{
			count += 2;
		}
		else if(S[i] == 'D' || S[i] == 'E' || S[i] == 'F')
		{
			count += 3;
		}
		else if(S[i] == 'G' || S[i] == 'H' || S[i] == 'I')
		{
			count += 4;
		}
		else if(S[i] == 'J' || S[i] == 'K' || S[i] == 'L')
		{
			count += 5;
		}
		else if(S[i] == 'M' || S[i] == 'N' || S[i] == 'O')
		{
			count += 6;
		}
		else if(S[i] == 'P' || S[i] == 'Q' || S[i] == 'R' || S[i] == 'S')
		{
			count += 7;
		}
		else if(S[i] == 'T' || S[i] == 'U' || S[i] == 'V')
		{
			count += 8;
		}
		else if(S[i] == 'W' || S[i] == 'X' || S[i] == 'Y' || S[i] == 'Z')
		{
			count += 9;
		}

		count++;
	}

	printf("%d\n", count);

	return 0;
}