/*Write a C program to Generate the following output
# # # # #
# # # # #
# # 0 # #
# # # # #
# # # # #*/



#include <stdio.h>
int main(void)
{
    int i,j,n=5;
    int a[i][j];
    for(i=0;i<n;i++)
    {
      for(j=0;j<n-1;j++)
      {
        if((i==2)&&(j==2))
        printf("0 ");
        else
        printf("# ");
      }
      //printf("\n");
       if((i==4)&&(j==4))
        printf("#");
        else
       printf("#");
       printf("\n");
      }
  return 0;
}
