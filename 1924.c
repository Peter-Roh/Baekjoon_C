#include<stdio.h>

int main(void)
{
	int x, y;
	int i;
	int t;

	scanf("%d %d", &x, &y);

	if (x != 2 && x != 1)
	{
		for (i = 5; i < 34; i++)
		{
			if (2.6 * (x + 1) - i < 1 && 2.6 * (x + 1) - i >= 0)
			{
				t = i + y + 1;
			}
		}

		if (t % 7 == 0)
			printf("SAT\n");
		else if (t % 7 == 1)
			printf("SUN\n");
		else if (t % 7 == 2)
			printf("MON\n");
		else if (t % 7 == 3)
			printf("TUE\n");
		else if (t % 7 == 4)
			printf("WED\n");
		else if (t % 7 == 5)
			printf("THU\n");
		else if (t % 7 == 6)
			printf("FRI\n");
	}

	else
	{
		x = x + 12;

		for (i = 36; i < 40; i++)
		{
			if (2.6 * (x + 1) - i < 1 && 2.6 * (x + 1) - i >= 0)
			{
				t = i + y;
			}
		}

		if (t % 7 == 0)
			printf("SAT\n");
		else if (t % 7 == 1)
			printf("SUN\n");
		else if (t % 7 == 2)
			printf("MON\n");
		else if (t % 7 == 3)
			printf("TUE\n");
		else if (t % 7 == 4)
			printf("WED\n");
		else if (t % 7 == 5)
			printf("THU\n");
		else if (t % 7 == 6)
			printf("FRI\n");
	}

	return 0;

}