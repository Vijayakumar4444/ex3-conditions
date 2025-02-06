#include<stdio.h>
int main()
{
    
    char c;
    int a,b;
     printf("Enter a operator:");
    scanf("%c",&c);
    printf("Enter any two numbers:\n");
    scanf("%d%d",&a,&b);
    switch(c)
    {
    case '+':
       printf("the value is:%d",a+b);
        break;
     case '-':
       printf("the value is:%d",a-b);
        break;
     case '*':
       printf("the value is:%d",a*b);
        break;
    case '/':
       printf("the value is:%d",a/b);
        break;
    
    default:
    printf("Invalid Operator");
        break;
    }
}