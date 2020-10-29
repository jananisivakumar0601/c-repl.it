/*Write a C program to count number of trailing zeros in the binary representation of an integer.
Get an integer number from the user through console

Sample Input-I
Enter the integer
12

Sample Output-I
Binary equivalent of 12 is 00001100
Number of trailing zeros in its binary representation is 2

Sample Input-II
Enter the integer
13

Sample Output-II
Binary equivalent of 13 is 00001101
Number of trailing zeros in its binary representation is 0*/


#include <stdio.h>
void dectobin(int);
int main(void) {
  int a;
  printf("Enter the integer\n");
  scanf("%d",&a);
  printf("Binary equivalent of %d is ",a);
  dectobin(a);
    return 0;
}
void dectobin(int x)
{
  int a[100],i,count=0;
  for(i=0;i<=7;i++)
    {
      a[i]=x%2;
      x=x/2;
      //printf("%d",a[i]);
    }
   for(i=7;i>=0;i--)
      {
         printf("%d",a[i]);
      }
    for(i=0;a[i]!=1;i++)
    {
      if(a[i]!=1)
      {
        count++;
      }
    }
    if(count!=0)
    printf("\nNumber of trailing zeros in its binary representation is %d",count);
    else
    printf("\nNumber of trailing zeros in its binary representation is %d",count);
  
}
