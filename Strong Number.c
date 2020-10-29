/*Write a C program to generate Strong numbers from 1 to 1000. 

Strong number is a special number whose sum of factorial  of digits is equal to the original number. For example, 145 is a strong number, because 1! + 4! + 5! = 145

Sample Input
Enter the limit
1000

Sample Output
1,2,145 are Strong numbers between 1 & 1000*/

#include <stdio.h>
int main(void) 
{
 int num,i,rem,temp,j,sum,fact;
 printf("Enter the limit\n");
 scanf("%d",&num);
 for(i=1;i<=num;i++)
 {
   temp=i;
   sum=0;
   while(temp!=0)
   {
   rem=temp%10;
   fact=1;
   for(j=rem;j>=1;j--)
   {
     fact=fact*j;
   }
   sum=sum+fact;
   temp=temp/10;
   }
    if(sum==i)
     {
      printf("%d,",i);
     }
  }
  printf(" are Strong numbers between 1 & %d",num);
  return 0;
}

