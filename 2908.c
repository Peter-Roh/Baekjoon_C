#include <stdio.h>

int reverse(int n)
{
	int a, b, c;
	int reverse;

	a = (n - (n % 100)) / 100;
	b = (n - 100 * a - ((n - 100 * a) % 10)) / 10;
	c = (n - 100 * a - 10 * b);

	reverse = 100 * c + 10 * b + a;

	return reverse;
}

int main(void)
{
	int a, b;
	int rev_a, rev_b;

	scanf("%d %d", &a, &b);

	rev_a = reverse(a);
	rev_b = reverse(b);

	if(rev_a > rev_b)
		printf("%d\n", rev_a);
	else
		printf("%d\n", rev_b);

	return 0;
}