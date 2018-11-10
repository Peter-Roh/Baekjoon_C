#include <stdio.h>

int gcd(long long int a, long long int b)
{
	return (b % a == 0) ? a : gcd(b % a, a);
}

int main(void)
{
  long long int A, B, G;
  int i;
  
  scanf("%lld %lld", &A, &B);

  G = gcd(A, B);

  for(i = 0; i < G; i++)
  {
    printf("1");
  }

	return 0;
}