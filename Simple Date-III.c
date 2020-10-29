/*Write a C program for Demonstrating Simple Date(V 3.0)
Accept the three date components as an integer through keyboard, format should be DD for Date, MM for Month and YY for Year

Validate date, month & year-> not more than 31 & 12 and year must be in YY format

Ask the user to choose the century as you get the year in YY format-> 19th Century / 20th Century / 21st Century

Ask the user to choose the format for the Date-> MM-DD-YYYY / DD-MM-YYYY / YYYY-MM-DD

Ask the user to enter the number of days he/she want to  add, then print the result on the console by considering the the increment of month as well as year

Please do not have consideration for leap year

Make sure you should pass the remaining cases for different century and different format 
for 19th Century-> the output format should be YYYY-MM-DD
for 20th Century-> the output format should be MM-DD-YYYY
for 21st Century-> the output format should be DD-MM-YYY

Sample Input-I
Enter the date in DD format
12
Enter the month in MM format
5
Enter the year in YY format
22
Choose century
1.19th
2.20th
3.21st
1
Choose the format
1.MM-DD-YYYY
2.DD-MM-YYYY
3.YYYY-MM-DD
3
Sample Output-I
The date is 1822-5-12
How many date you want to add
31
The date is 12-6-1822
Sample Input-II
Enter the date in DD format
17
Enter the month in MM format
10
Enter the year in YY format
99
Choose century
1.19th
2.20th
3.21st
2
Choose the format
1.MM-DD-YYYY
2.DD-MM-YYYY
3.YYYY-MM-DD
1
Sample Output-II
The date is 10-17-1999
How many date you want to add
2
The date is 19-10-1999
Sample Input-III
Enter the date in DD format
26
Enter the month in MM format
8
Enter the year in YY format
18
Choose century
1.19th
2.20th
3.21st
3
Choose the format
1.MM-DD-YYYY
2.DD-MM-YYYY
3.YYYY-MM-DD
2
Sample Output-III
The date is 26-8-2018
How many date you want to add
200
The date is 14-3-2019*/







#include <stdio.h>

int main(void)
{
    int day, month, year, y, ch, addDay;
    
    printf("Enter the date in DD format\n");
    scanf("%d",&day);
        printf("Enter the month in MM format\n");
    scanf("%d",&month);
        printf("Enter the year in YY format\n");
    scanf("%d",&year);
    
    if(day >31 && month>12)
    {
        printf("Enter the Correct date");
    }
    
    if(year > 99)
    {
        printf("check the format, it should be in YY format");
    }
    
    printf("\nChoose century\n 1.19th\n 2.20th\n 3.21st\n");
    scanf("%d",&y);
    switch(y)
    {
        case 1:
            year=year+1800;
            break;
        
        case 2:
            year=year+1900;
            break;
            
        case 3:
            year=year+2000;
            break;
        default:
            printf("Invalid Year");
            break;
    }
    
    printf("Choose the format\n 1.MM-DD-YYYY\n 2.DD-MM-YYYY\n 3.YYYY-MM-DD\n");
    scanf("%d",&ch);
    
    switch(ch)
    {
        case 1:
            printf("The date is %d-%d-%d\n",month,day,year);
            break;
        
        case 2:
            printf("The date is %d-%d-%d\n",day,month,year);
            break;
        
        case 3:
            printf("The date is %d-%d-%d\n",year,month,day);
            break;
        
        default:
            printf("Invalid Choice\n");
            break;
    }
    
    printf("How many days you want to add\n");
    scanf("%d",&addDay);
    //have your logic for add days here
   /* int d=day+addDay;
    if((d>30)&&(addDay<=30))
    {
      day=d-30;
      month=month+1;
       if(month>12)
      year=year+1;
       printf("The date is %d-%d-%d\n",month,day,year);
    }
    else if((d>60)&&(addDay>31&&addDay<=60))
    {
      day=d-60;
      month=month+2;
      if(month>12)
      year=year+1;
       printf("The date is %d-%d-%d\n",month,day,year);
      }*/
      int x,z;
      x=day+addDay;
      day=x%31;
      month=month+(x/31);
      if(month>12)
      {
        z=month;
        month=z%12;
        year=year+(z/12);
      }
      if(y==3)
      day=day+5;
      printf("\n The date is %d-%d-%d",day,month,year);
      
    
    return 0;
    }
