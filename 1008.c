#include<stdio.h>
int main(void)
{
	double a, b;
	double div;

	scanf("%lf %lf", &a, &b);

	div = a / b;

	printf("%.10f\n", div);

	return 0;

}