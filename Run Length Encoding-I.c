/*Write a C program to print the frequency of letters in a String using run-length encoding.

Run-length encoding(RLE) is a very simple form of lossless data compression in which runs of data

infer the sample inputs and sample outputs throughly

Sample Input-I
Enter the input string
wwwwaaadexxxxxx

Sample Output-I
RLE result is 4w3a1d1e6x

Sample Input-II
Enter the input string
aaaabbcccccddf

Sample Output-II
RLE result is 4a2b5c2d1f*/

#include <stdio.h>
#include <string.h>
int main(void) {
    char str[50];
   int i,j,count=0,length;
printf("Enter the input string\n");
scanf("%s",str);
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
    str[j]='#';
    }
  }
if(str[i]!='#')
  {
    printf("%d%c",count,str[i]);
  }
}
  
  
  return 0;
}
