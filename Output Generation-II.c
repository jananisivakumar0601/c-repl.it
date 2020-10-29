/*Write a C program to Generate the following output
* $ $ $ $ 
$ * $ $ $ 
$ $ * $ $ 
$ $ $ * $ 
$ $ $ $ * 

every loop iteration must show 4 $s and diagonals should be *(all must be separated by spaces)

I will verify every single code manually, so please don't mock.*/


#include <stdio.h>
int main(void)
{
    int i,j,n=5;
    int a[i][j];
    for(i=0;i<n;i++)
    {
      for(j=0;j<n-1;j++)
      {
        if(i==j)
        printf("* ");
        else
        printf("$ ");
      }
      //printf("\n");
       if((i==4)&&(j==4))
        printf("*");
        else
        printf("$");
       printf("\n");
      }
  return 0;
}
