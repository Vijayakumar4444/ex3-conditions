#include<stdio.h>
int main()
{
   int a;
   printf("Enter your age");
   scanf("%d",&a);
   if (a>=18)
   {
    printf("you are elligible for voting");
   }
   else
   {
    printf("you are nopt elligible for voting");
   }
   return 0;
   
   }