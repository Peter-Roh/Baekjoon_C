#include<stdio.h>
int main(void)
{
    int n, i;
    int sum=0;
    
    scanf("%d", &n);
    
    for(i=1; i<=n ; i++)
        sum += i;
    
    printf("%d\n", sum);
    
    return 0;
    
}