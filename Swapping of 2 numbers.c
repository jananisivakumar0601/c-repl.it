/*Write a C program for swapping of 2 numbers with a temporary variable

Accept the inputs through keyboard and don't have console indicates for accepting inputs, for eg. Enter 2 numbers | Enter 2 nos | enter your input are not required

Sample Input

Enter two numbers
3
4

Sample Output

before swapping values are 3 4
after swapping values are 4 3*/

#include <stdio.h>
void swap(int,int);
int main(void) {
  int a,b;
  printf("\n");
  scanf("%d %d",&a,&b);
  printf("before swapping values are %d %d \n",a,b);
  swap(a,b);
  printf("after swapping values are %d %d",b,a);
  
  return 0;
}
void swap(int x,int y)
{
  x=x+y;
  y=x-y;
  x=x-y;
}
