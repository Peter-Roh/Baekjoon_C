#include <stdio.h>

#define Pi 3.14159265358979

int main(void)
{
	double R;

	scanf("%lf", &R);

	printf("%.6lf\n", R * R * Pi);
	printf("%.6lf\n", 2 * R * R);

	return 0;
}