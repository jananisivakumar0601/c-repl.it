/*Write a C program to check whether a number is perfect number or not.
Perfect number is a positive integer which is equal to the sum of its proper positive divisors.
for example, 6 is a perfect number,because proper divisors of 6 are 1,2,3, so 1+2+3=6.

Sample Input-I
Enter the number
6

Sample Output-I
6 is a perfect number

Sample Input-II
Enter the number
28

Sample Output-II
28 is a perfect number

Sample Input-III
Enter the number
8

Sample Output-III
8 is not a perfect number*/


#include <stdio.h>

//Compiler version gcc  6.3.0

int main(void)
{
  int num,i,temp,count=0;
  printf("Enter the number\n");
  scanf("%d",&num);
 for(i=1;i<=num-1;i++)
 {
   if(num%i==0)
   count=count+i;
 }
 if(count==num)
   {
     printf("%d is a perfect number",num);
   }
   else
   {
     printf("%d is not a perfect number",num);
   }
   
  return 0;
}
