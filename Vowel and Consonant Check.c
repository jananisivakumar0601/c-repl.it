/*Write a C program to check the entered character is Vowel or Consonant
Accept a character through keyboard
your code must work for both UPPERCASE & lowercase
Sample Input
Enter any character :
u
Sample Output
u is a VOWEL

Sample Input
Enter any character :
A
Sample Output
A is a VOWEL

Sample Input
Enter any character :
x
Sample Output
x is a CONSONANT*/


#include <stdio.h>

int main(void) {
  char a;
  printf("Enter any character:\n");
  scanf("%c",&a);
  if((a=='a')|(a=='e')|(a=='i')|(a=='o')|(a=='u')|(a=='A')|(a=='E')|(a=='I')||(a=='O')||(a=='U'))
{
  printf("%c is a VOWEL",a);
}
else
{
  printf("%c is a CONSONANT",a);
}
  return 0;
}
