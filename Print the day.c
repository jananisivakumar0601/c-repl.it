/*Write a C program to print whether the given date is weekday or weekend
Get the date from the user in DD-MM-YYYY format

If the entered date is 15-05-2019 means, output should be- Wednesday-Weekday

If the entered date is 23-03-2019 means, output should be- Saturday-Weekend

If the user enter an invalid date, output should be- please enter the date in proper format

Sample Input-I
Enter the date
15-05-2019

Sample Output-I
Wednesday- Weekday

Sample Input-II
Enter the date
23-03-2019

Sample Output-II
Saturday-Weekend

Sample Input-III
Enter the date
17-05-2016

Sample Output-III
Tuesday-Weekday

Sample Input-IV
Enter the date
30-02-2000

Sample Output-IV
Entered date is invalid*/



# include<stdio.h>

int main(void)
{
 int date,month,year;
 int arr[3];
 int last_digit,quotient,i,year_code,month_number,total,day_no,leap_day_no;
 int mon_value[]={0,3,3,6,1,4,6,2,5,0,3,5};
 printf("Enter the date\n");
 scanf("%d-%d-%d",&date,&month,&year);
 if((month==2 && date>=0 && date<=28)
    ||((month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)&&(date>=0 && date<=31))
    ||((month==4 || month==6 || month==9 ||month==11)&&(date>=0 && date<=30))
    ||((year%400==0 || year%4==0) && (month==2 && date>=0 && date<=29)))
 {
 
 if(year>=1600 && year<=1699)
 {
   year_code=6;
 }
 else if(year>=2000 && year<=2099){
   year_code=6;
 }
 else if(year>=1700 && year<=1799)
 {
   year_code=4;
 }
 else if (year>=1800 && year<=1899)
 {
   year_code=2;
 }
 else if(year>=1900 && year<=1999)
 {
   year_code=0;
 }
 else 
 {
   printf("please enter the valid year");
 }
 last_digit=year%100;
 quotient=last_digit/4;
 i=month-1;
 month_number=mon_value[i];
 total=last_digit+quotient+date+month_number+year_code;
 day_no=total%7;
 if((year%4==0 || year%400==0 )&& month==2)
 {
  leap_day_no=day_no-1;
switch(leap_day_no)
{
  case 0:
  printf("Sunday-Weekend");
  break;
  case 1:
  printf("Monday-Weekday");
  break;
  case 2:
  printf("Tuesday-Weekday");
  break;
  case 3:
  printf("Wednesday-Weekday");
  break;
  case 4:
  printf("Thursday-Weekday");
  break;
  case 5:
  printf("Friday-Weekday");
  break;
  case 6:
  printf("Saturday-Weekend");
  break;
  default:
  printf("Invalid day number");
  break;
}
}
else
{
  switch(day_no)
  {
     case 0:
  printf("Sunday-Weekend");
  break;
  case 1:
  printf("Monday-Weekday");
  break;
  case 2:
  printf("Tuesday-Weekday");
  break;
  case 3:
  printf("Wednesday-Weekday");
  break;
  case 4:
  printf("Thursday-Weekday");
  break;
  case 5:
  printf("Friday-Weekday");
  break;
  case 6:
  printf("Saturday-Weekend");
  break;
  default:
  printf("Invalid day number");
  break;
  }
}

 }
 else
 {
   printf("Entered date is invalid");
 }
return 0;
}

