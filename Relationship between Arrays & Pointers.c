/*Write a C program to show relationship between Arrays and Pointers
Declare a character array for a string literal "hello"

Declare a character pointer and relate it with declared char array

Iterate through the string literal by for loop(you can usestring library functions) and print the same string as 
h  e  l  l  o (tab spaced hello)

You should use pointer indirection and pointer arithmetic for getting a tab-spaced hello printed

Sample Input:
hello(must be initialised by the time of declaration)

Sample Output:
h     e     l     l     o*/



#include <stdio.h>
#include <string.h>
int main(void) {
char *c="hello";
for(int i=0;i<strlen(c);i++)
{
printf("%c \t",c[i]);
}

  
  
  return 0;
}
