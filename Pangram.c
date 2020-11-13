/*Pangram is a sentence containing every letter in the english alphabet. Given a string, find all characters that are missing from the string, i.e., the characters that can make string a pangram.

The output should be in alphabetic order.

Sample Input-I
Enter the string
The quick brown fox jumps

Sample Output-I
The pangram result is
adglvyz

Sample Input-II
Enter the string
Mr. Jock, TV quiz PhD., bags few lynx.

Sample Output-II
The entered string is perfect pangram. */

#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main(void) 
{
  char a[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
  char str[50];
  int length=0,i,j,count,len;
  printf("Enter the string\n");
  scanf("%[^\n]s",str);
  len=strlen(str);
  for(i=0;i<len;i++)
  {
    if(str[i]==' ')
    {
      for(j=i;j<len;j++)
      {
        str[j]=str[j+1];  //Removing spaces in between the sentence
      }
     len--;
    }
  }
  for(i=0;i<len;i++)
  {
    if(isupper(str[i]))
    {
      str[i] = tolower(str[i]);  //Converting upper case to lower case 
    }
  }
  for(i=0;i<len;i++)
  {
    for(j=0;j<26;j++)
    {
      if(str[i]==a[j])        //logic for checking perfect pangram
      {
      length++;
      }
    }
  }
  if(length==26)
    printf("The entered string is perfect pangram.");
  else
  {
  printf("The pangram result is\n");
  for(i=0;i<26;i++)
  {
    count=0;
    for(j=0;j<len;j++)
    {
      if(a[i] == str[j])           //printing out the missing alphabets from the string 
        count++;
    }
    if(count==0)
    printf("%c",a[i]);    
  }  
  }
   return 0;
}
