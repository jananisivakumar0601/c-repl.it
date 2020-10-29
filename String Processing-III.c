/*Write a function that returns the index where a character, c, occurs in a string, s. The function returns -1 if c is not present in s. Use array indexing.
you're absolutely free to change the given skeleton code

Sample Input-I
Enter the String
computer
Enter the character you want to search
t

Sample Output-I
5

Sample Input-II
Enter the String
computer
Enter the character you want to search
a

Sample Output-II
-1*/

#include <stdio.h>
#include <string.h>
int position(char,char [],int);
int main(void) {
  char s[100],m;
  int pos,d;
  printf("Enter the String\n");
  scanf("%s",s);
  printf("Enter the character you want to search\n");
  scanf(" %c",&m);
  d=position(m,s,pos);
  printf("%d",d);
}
int position(char c,char n[],int p){
  int length;
  length=strlen(n);
 for(int i=0;i<length;i++)
 {
  if(c==n[i])
  return i;
  }
  return -1;

}
