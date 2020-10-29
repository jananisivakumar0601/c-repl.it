/*Write a C program to check whether the entered pair of numbers are Amicable numbers or not?
Accept 2 input integer numbers through keyboard
What is Amicable Pair?
let's consider 2 numbers A & B, first you need to generate the proper divisors of A, then sum it, then generate the proper divisors of B, then sum it, if A's sum of proper divisors equals to B and B's sum of proper divisors equals to A means we can call the pair of numbers as Amicable Pair. 
Eg: A=220 and B=284
They are amicable pair because the proper divisors of 220 are 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 and 110, of which the sum is 284; and the proper divisors of 284 are 1, 2, 4, 71 and 142, of which the sum is 220.

Sample Input
Enter two numbers to check if Amicable or not
220
284
Sample Output
220 and 284 are Amicable numbers
Sample Input
Enter two numbers to check if Amicable or not
22
44
Sample Output
22 and 44 are not Amicable numbers*/


#include <stdio.h>

int main(void) {
  int a,b,x=0,y=0,i;
  printf("Enter two numbers to check if Amicable or not \n");
  scanf("%d %d",&a,&b);
  for(i=1;i<=a/2;i++)
  {
    if(a%i==0)
    {
      x=x+i;
    }
  }
  for(int i=1;i<=b/2;i++)
  {
    if(b%i==0)
    {
      y=y+i;
    }
  }
  if((x==b)&&(y==a))
  printf("%d and %d are Amicable numbers",a,b);
  else
  printf("%d and %d are not Amicable numbers",a,b);
  
  return 0;
}
