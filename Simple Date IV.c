/*Write a C program for Demonstrating Simple Date(V 4.0)
Accept the three date components as an integer through keyboard, format should be DD for Date, MM for Month and YY  for Year

Validate date, month & year-> not more than 31 & 12 and   year must be in YY format

Ask the user to choose the century as you get the year in YY format-> 19th Century / 20th Century / 21st Century

Ask the user to choose the format for the Date->MM-DD-YYYY / DD-MM-YYYY / YYYY-MM-DD

Ask the user to enter the number of days he/she want to  add, then print the result on the console by considering   the the increment of month as well as year

Please have the consideration for leap year

Have a looping construct to iterate add days part with this version-> Option 1(Yes) to continue and Option 2(No) to quit-> refer the sample output 

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
How many days you want to add
31
The date is 12-6-1822
Do you want to continue 
1.Yes
2.No
1
How many days you want to add
262
The date is 1-3-1823
Do you want to continue 
1.Yes
2.No
2

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
How many days you want to add
135
The date is 29-2-2000
Do you want to continue 
1.Yes
2.No
2

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
How many days you want to add
187
The date is 1-3-2019
Do you want to continue 
1.Yes
2.No
1
How many days you want to add
30
The date is 31-3-2019
Do you want to continue 
1.Yes
2.No
2*/




#include <stdio.h>

int main(void)
{
    int day, month, year, y, ch, addDay,i,n;
    int mon[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int mons[12]={31,29,31,30,31,30,31,31,30,31,30,31};
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
    for(i=1;i<=addDay;i++){
     day++;  
     
      
      if(day>mon[month-1]){
        if(year%4==0){
          mon[1]=29;
        }
        day=1;
        month++;
      }
        
         if(month>12){
           
        month=1;
        year++;
         }
    }
      
          printf("The date is %d-%d-%d ",day,month,year);


     while(1){
       printf("\nDo you want to continue\n");
       printf("\n1.Yes\n2.No\n");
       scanf("\n%d",&n);
       if(n==2){
         break;
       }else{
         printf("How many days you want to add\n");
     scanf("%d",&addDay);
     for(i=1;i<=addDay;i++){
     day++;    
       if(day>mon[month-1]){
         day=1;
         month++;
       }
         if(month>12){
         month=1;
         year++;
        }
        
     }
     printf("\nThe date is %d-%d-%d",day,month,year);
       }
     }
     return 0;
    }



  



