/*Write a C program to find an ASCII value of an input
Accept one char input through console
strictly you should not use any other variable of any type
Sample Input
Enter a character
a

Sample Output
ASCII value of a is 97*/



#include <stdio.h>

int main(void) {
  char ch;
  int c;
  printf("Enter a character\n");
  scanf("%c",&ch);
  printf("ASCII value of a is %d",ch);
  
  return 0;
}


