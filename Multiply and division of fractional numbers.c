/*Write a C program to perform Multiplication and Division of Fractional numbers

Accept the inputs through keyboard

Sample Input
2
4

Sample Output

Multiplication result is 8.000000
Division result is 0.500000*/

#include <stdio.h>
int main(void)
{
  float a,b,c,d;
  printf("\n");
  scanf("%f %f",&a,&b);
  c=a*b;
  d=a/b;
  printf("Multiplication result is %f\n",c);
  printf("Division result is %f",d);
  
  return 0;
}
