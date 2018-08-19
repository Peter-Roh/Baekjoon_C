#include <stdio.h>

int main(void)
{
	int num = 0, i, max = 0, out, in;

	for(i = 0; i < 4; i++)
	{
		scanf("%d %d", &out, &in);

		num += in - out;

		if(max < num)
		{
			max = num;
		}
	}

	printf("%d\n", max);

	return 0;
}