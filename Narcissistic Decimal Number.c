/*Write a C program to check whether the given number is Narcissistic Decimal Number or not and also generate first 15 Narcissistic Decimal Numbers. 

Narcissistic Number is a number that is the sum of its own digits each raised to the power of the number of digits.
for example, 1634 is Narcissistic Number, because 1^4 + 6^4 + 3^4 + 4^4 = 1634.

Sample Input-I
1.Choose the option
2.Check Narcissistic Number
3.Generate first 15 Narcissistic Numbers
4.Exit
1
Enter a number
1

Sample Output-I
the entered number is a Narcissistic Number

Sample Input-II
1.Choose the option
2.Check Narcissistic Number
3.Generate first 15 Narcissistic Numbers
4.Exit
1
Enter a number
153

Sample Output-II
the entered number is a Narcissistic Number

Sample Input-III
1.Choose the option
2.Check Narcissistic Number
3.Generate first 15 Narcissistic Numbers
4.Exit
1
Enter a number
12

Sample Output-III
the entered number is not a Narcissistic Number

Sample Input-IV
1.Choose the option
2.Check Narcissistic Number
3.Generate first 15 Narcissistic Numbers
4.Exit
2
Sample Output-IV
The first 15 Narcissistic Numbers are
1 2 3 4 5 6 7 8 9 153 370 371 407 1634 8208*/


#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(void) {
  int num,nar_num,count=0,quot,temp,rem,multi,sum=0,temp_no,i;
  printf("Choose the option");
  printf("1.Check Narcissistic Number\n");
  printf("2.Generate first 15 Narcissistic Numbers\n");
  printf("3.Exit\n");
  scanf("%d",&num);
  switch(num)
  {
    case 1:
  printf("Enter a number\n");
  scanf("%d",&nar_num);
  temp=nar_num;
  temp_no=nar_num;
  while(nar_num!=0)
  {
    quot=nar_num/10;
    count++;
    nar_num=quot;
  }
  while(temp!=0)
  {
    rem=temp%10;
    multi=pow(rem,count);
    sum+=multi;
    temp/=10;
  }
  if(sum==temp_no)
  printf("the entered number is a Narcissistic Number");
  else
  printf("the entered number is not a Narcissistic Number");
  break;
  case 2:
  printf("The first 15 Narcissistic Numbers are\n");
   int i,ctr,j,orn,n,m,sum;
    orn=1;
    for (i=1;i<=15;)
    {
    ctr=0;
    sum=0;
    n=orn;
       while(n>0) 
       {
          n=n/10;
           ctr++;
       }
        n=orn;
       while(n>0) 
       {
          m=n % 10;
          sum=sum+pow(m,ctr);
          n=n/10;
       }
       if(sum==orn)
       {
           	printf("%d ",orn);
           	i++;
       }
    orn++;
    }
  break;
  case 3:
  exit(0);
}
  return 0;
}
