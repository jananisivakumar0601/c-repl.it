/*Write a function that returns the index where a character, c, occurs in a string, s. The function returns -1 if c is not present in s. Use array indexing.
your logic should work for repetitive characters in a     given string

consider every sample input and sample output for passing test cases.

Sample Input-I
Enter the String
data
Enter the character you want to search
a
The character ‘a’ found in 2 index/indices 1,3
Which index you’re targeting?
3

Sample Output-I
3
Sample Input-II
Enter the String
google cloud platform
Enter the character you want to search
o
The character ‘o’ found in 4 index/indices 1,2,9,18
Which index you’re targeting?
9

Sample Output-II
9

Sample Input-III
Enter the String
analytics
Enter the character you want to search
y 
The character ‘y’ found in 1 index/indices 4

Sample Output-III
4 */

//Refer Incomplete code for this to get manju's strategy

#include <stdio.h>
#include <string.h>
void position(char,char []);
int main(void) {
  char s[100],search;
  printf("Enter the String\n");
  scanf("%[^\n]s",s);
  printf("Enter the character you want to search\n");
  scanf(" %c",&search);
  position(search,s);
  return 0;
}
void position(char c,char n[])
{
  int i,count=0,target;
  printf("\nThe character '%c' found in ",c);
  for(i=0;i<strlen(n);i++)
  {
    if(c==n[i])
    count++;
  }
  printf("%d",count);
  if(count==1)
  {
    printf(" index/indices ");
  for(i=0;i<strlen(n);i++)
  {
    if(c==n[i])
    printf("%d\n%d",i,i);
  }
  }
  if(count>1)
  {
    printf(" index/indices ");
    for(i=0;i<strlen(n);i++)
    {
      if(c==n[i])
      printf("%d,",i);
    }
    printf("\nWhich index you're targeting?\n");
    scanf("%d",&target);
    printf("%d",target);
  }
}
