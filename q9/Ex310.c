#include<stdio.h>
int main()
{
    int a,fact=1,i;
    printf("Enter a number:");
    scanf("%d",&a);
    for ( i = 1; i<=a; i++)
    {
        fact=fact*i;
    }
    printf("%d",fact);
    return 0;
    
}