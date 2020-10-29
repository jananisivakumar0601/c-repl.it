/*Write a C program to find the ASCII values summation of vowels in the given string

Get the sequence of alphabets through console

Make sure your logic should work for both uppercase and   lowercase

Sample Input-I
Input the String
kite

Sample Output-I
The vowel(s) is(are) i, e
ASCII summation is 206  

Sample Input-II
Input the String
KGCAS

Sample Output-II
The vowel(s) is(are) A
ASCII summation is 65*/

#include <stdio.h>
#include<string.h>
int main(void) {
  char a[100];
  int i,length,c=0;
printf("Input the String\n");
scanf("%[^\n]s",a);
length=strlen(a);
  printf("The vowel(s) is(are)");
for(i=0;i<length;i++)
{
if((a[i]=='a')||(a[i]=='e')||(a[i]=='i')||(a[i]=='o')||(a[i]=='u')||(a[i]=='A')||(a[i]=='E')||(a[i]=='I')||(a[i]=='O')||(a[i]=='U'))
{
  printf("%c,\n",a[i]);
  c+=a[i];
}
}
printf("ASCII summation is %d\n",c);
  return 0;
}
