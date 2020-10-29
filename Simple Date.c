/*Write a C program for handling Date
Accept the three date components as an integer through keyboard

Validate date and month-> not more than 31 & 12

Display the date details in MM-DD-YYYY format

Sample Input
Input the Date
Date
28
Month
12
Year
1969

Sample Output
The entered date is 12-28-1969

Sample Input
Input the Date
Date
32
Month
2
Year
1896

Sample Output
Entered Date is invalid*/




#include <stdio.h>

int main(void) {
  int d,m,y;
  printf("Input the Date\n");
  printf("Date\n");
  scanf("%d",&d);
  printf("Month\n");
  scanf("%d",&m);
  printf("Year\n");
  scanf("%d",&y);
 if((d<=31)&&(m<=12))
  printf("The entered date is %d-%d-%d",m,d,y);
  else
    printf("Entered date is invalid");
  return 0;
}
