/*Write a C program to find Sum and Average of 10 numbers
Accept the input through keyboard
don't use arrays to store user input
Sample Input
Input the 10 numbers : 
1
2
3
4
5
6
7
8
9
10

Sample Output
The sum of 10 no is : 55
The Average is : 5.500000*/


#include <stdio.h>
int main(void)
{
  int a,b,c,d,e,f,g,h,i,j,sum;
  float average;
  printf("Input the 10 numbers :\n");
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
  scanf("%d",&d);
  scanf("%d",&e);
  scanf("%d",&f);
  scanf("%d",&g);
  scanf("%d",&h);
  scanf("%d",&i);
  scanf("%d",&j);
  sum=a+b+c+d+e+f+g+h+i+j;
  average=sum/10.0;
  printf("The sum of 10 no is: %d \n",sum);
  printf("The average is : %f",average);
}
