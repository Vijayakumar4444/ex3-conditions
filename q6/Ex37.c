
#include<stdio.h>
int main()
{
  char a;
  printf("Enter a character:");
  scanf("%c\n",&a);
  if(a>='A'&&a<='Z')
  {
    printf("Upper case");
  }
  else if (a>='a'&&a<='z')
  {
   printf("Lower case");
  }
  else if (a>=48&&a<=57)
  {
    printf("Number");
  }
  else
  {
    printf("Special Character");
  }
  
  
  return 0; 
}