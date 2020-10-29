/*Write a C program to Generate the following output

1 
234 
56789 

1 to 9 must be printed by a loop. In first row 1 number, second row 3 numbers and in third row 5 numbers must be  printed*/



#include <stdio.h>

int main(void) {
  int i=1;
    printf("%d",i);
  printf("\n");
  for(int i=2;i<=4;i++)
  {
    printf("%d",i);
  }
  printf("\n");
  for(int j=5;j<=9;j++)
  {
    printf("%d",j);
  }
  
  return 0;
}
