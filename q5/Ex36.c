#include<stdio.h>
int main()
{
    int a;
    printf("Enter the day number:");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
      printf("It is Monday");
        break;
    case 2:
      printf("It is Tuesday");
        break;
    case 3:
      printf("It isWednesday");
        break;
    case 4:
      printf("It isThursday");
        break; 
    case 5:
      printf("It is Friday");
        break;
    case 6:
      printf("It is Saturday");
        break;
    case 7:
      printf("It is Sunday");
        break;   
  
    default:
    printf("Invalid day number");
        break;
    }
}