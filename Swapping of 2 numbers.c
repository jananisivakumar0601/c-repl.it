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

  
  

/*Write a C program to swap two numbers using pointers
Accept two integer numbers through keyboard
pass the address of two inputs to a swap() function
in the function definition retrieve the inputs using pointers and have the swapping logic
Sample Input
enter 2 numbers to swap
22
44

Sample Output
before swapping a and b are 22 and 44
after swapping a and b are 44 and 22*/

#include <stdio.h>

int main(void) {
  int a,b,c;
  int *d,*e;
  d=&a;
  e=&b;
  printf("enter 2 numbers to swap\n");
  scanf("%d %d",&a,&b);
  printf("before swapping a and b are %d %d\n",a,b);
  c=*d;
  *d=*e;
  *e=c;
  printf("after swapping a and b are %d  %d",*d,*e);
  
  return 0;
}
