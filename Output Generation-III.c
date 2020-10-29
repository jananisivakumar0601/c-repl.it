/*Write a C program to Generate the following output
* 
*** 
***** 
******* 
********* 
every loop iteration must show asterisk(s), first       iteration 1, iteration 3, third iteration 5 and  so on. */


#include <stdio.h>

int main(void) {
  int n=5;
  char s='*';
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=i;j++)
    {
      printf("%c",s);
      if((i==2)&&(j==2))
     printf("*");
     if((i==3)&&(j==3))
     printf("**");
     if((i==4)&&(j==4))
     printf("***");
     if((i==5)&&(j==5))
     printf("****");
    }
  
    printf("\n");
  }
  
  return 0;
}
