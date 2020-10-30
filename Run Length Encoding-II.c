/*Write a C program to print the frequency of letters in a String using run-length encoding.

Run-length encoding (RLE) is a very simple form of      lossless data compression in which runs of data

Make sure your logic should work for both uppercase and lowercase letters

infer the sample inputs and sample outputs throughly

Sample Input-I
Enter the input string
AAaaBBcccdeEFfGGhh

Sample Output-I
RLE result is 2A2a2B3c1d1e1E1F1f2G2h

Sample Input-II
Enter the input string
iiIIjKkLLmmMSsSZzZZ

Sample Output-II
RLE result is 2i2I1j1K1k2L2m1M1S1s1S1Z1z2Z  */



#include <stdio.h>
#include <string.h>
int main(void) {
    char str[50];
   int i,j,count=0,length;
printf("Enter the input string\n");
scanf("%[^\n]s",str);
length = strlen(str);
printf("RLE result is "); 
for(i=0;i<length;i++)
{
  count=1;
  for(j=i+1;j<length;j++)
  {
    if(str[i]==str[j])
    {
    count++;
    }
    if(str[i]==str[j] && str[j] == str[j+1] )
    count++;
    break;
  }
if(str[i]!=str[i-1])
  {
    printf("%d%c",count,str[i]);
  }
}
  
  
  return 0;
}
