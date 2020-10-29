/*Write a C program to perform addition of 2 integer numbers.

You should accept 2 integer numbers through keyboard.

Sample Input

Enter 2 numbers
10
5

Sample Output
Total is 15*/

#include <stdio.h>

int main(void) {
  int a,b,c;
  printf("Enter 2 numbers\n");
  scanf("%d %d",&a,&b);
  c=a+b;
  printf("Addition result is %d",c);
  
  
  return 0;
}
