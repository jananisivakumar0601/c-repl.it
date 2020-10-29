/*Write a C program to check whether the entered year is leap year or not

Accept the input through keyboard

Sample Input
Enter the year data to check
2004

Sample Output
Yeah, the entered year is leap year

Sample Input
Enter the year data to check
2006

Sample Output
No, the entered year is not a leap year*/


#include <stdio.h>
int main(void) {
  int year;
  printf("Enter the year data to check\n");
  scanf("%d",&year);
  if(year%4==0)
  {
    printf("Yeah,the entered year is leap year");
  }
  else
  {
    printf("No,the entered year is not a leap year");
  }
  
  return 0;
    }
