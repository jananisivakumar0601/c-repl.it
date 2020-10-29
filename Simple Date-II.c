/*Write a C program for Demonstrating Simple Date(V 2.0)
Accept the three date components as an integer through keyboard, format should be DD for Date, MM for Month and YY for Year

Validate date, month & year-> not more than 31 & 12 and year must be in YY format

Ask the user to choose the century as you get the year in YY format-> 19th Century / 20th Century / 21st Century

Ask the user to choose the format for the Date->MM-DD-YYYY / DD-MM-YYYY / YYYY-MM-DD

Make sure you should pass the remaining cases for different century and different format 
for 19th Century-> the output format should be YYYY-MM-DD
for 20th Century-> the output format should be MM-DD-YYYY
for 21st Century-> the output format should be DD-MM-YYY

Sample Input-I
Enter the date in DD format
11
Enter the month in MM format
2
Enter the year in YY format
44
Choose Century
1. 19th
2. 20th
3. 21st
1
Choose the format
1. MM-DD-YYYY
2. DD-MM-YYYY
3. YYYY-MM-DD
3
Sample Output-I
The date is 1844-2-11

Sample Input-II
Enter the date in DD format
11
Enter the month in MM format
2
Enter the year in YY format
44
Choose Century
1. 19th
2. 20th
3. 21st
2
Choose the format
1. MM-DD-YYYY
2. DD-MM-YYYY
3. YYYY-MM-DD
1
Sample Output-II
The date is 2-11-1944

Sample Input-III
Enter the date in DD format
23
Enter the month in MM format
10
Enter the year in YY format
14
Choose Century
1. 19th
2. 20th
3. 21st
3
Choose the format
1. MM-DD-YYYY
2. DD-MM-YYYY
3. YYYY-MM-DD
2
Sample Output-III
The date is 23-10-2014*/




#include <stdio.h>

int main(void)
{
  int d,m,y,n;
    printf("Enter the date in DD format\n");
    scanf("%d",&d);
    printf("Enter the month in MM format\n");
    scanf("%d",&m);
    printf("Enter the year in YY format\n");
    scanf("%d",&y);
    if((d<=31)&&(m<=12)&&(y<=99))
    {
    printf("Choose Century\n");
    printf("1. 19th\n");
    printf("2. 20th\n");
    printf("3. 21st\n");
    scanf("%d",&n);
    
    
    printf("Choose the format\n");
    printf("1.MM-DD-YYYY\n");
    printf("2.DD-MM-YYYY\n");
    printf("3.YYYY-MM-DD\n");
    scanf("%d",&n);
    switch(n)
    {
      case 1:
      printf("The date is %d-%d-19%d\n",m,d,y);


      break;
      case 2:
      printf("The date is %d-%d-20%d\n",d,m,y);
      break;
      case 3:
      printf("The date is 18%d-%d-%d \n",y,m,d);
      break;
      default:
      printf("Enter the correct format");
    }
    }
    else
 
    {
      printf("Invalid Input");
    }
    return 0;
}




