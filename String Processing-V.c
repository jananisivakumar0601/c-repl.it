/*Write a function that detects the presence of a whole word, wd, in a string, s.
get the input string from the user

Sample Input-I
Enter the String
Computer Science and Engineering
Enter the word you want to search
and

Sample Output-I
the search word is found

Sample Input-II
Enter the String
Information Technology
Enter the word you want to search
Computer

Sample Output-II
the search word is not found*/


#include <stdio.h>
#include <string.h>
int main(void) {
char str[100],s[50];
int i,j,k,l,flag=0;
printf("Enter the String\n");
scanf("%[^\n]s",str);
printf("Enter the word you want to search\n");
scanf("%s",s);
l=strlen(s);
for(i=0;str[i+l-1];i++)
{
  k=i;
for(j=0;j<l-1;j++)
{
  if(str[k]!=s[j])
  break;
  k++;
  flag=1;
}
}
if(flag==1)
printf("the search word is found\n");
else
printf("the search word is not found\n");
  return 0;
}
