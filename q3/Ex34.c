#include<stdio.h>
int main()
{
    int a;
    printf("Enter your marks");
    scanf("%d",&a);
    if (a>=90&&a<=100)
    {
      printf("A grade");
    }
    else if (a>=80&&a<=89)
    {
        printf("B grade");
    }
    else if (a>=70&&a<=79)
    {
      printf("C grade");
    }
    else
    {
        printf("Fail");
    }
    return 0;
    }
    
    
    
