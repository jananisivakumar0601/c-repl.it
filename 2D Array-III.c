/*Write a C program to interchange the main diagonal elements with secondary diagonal elements. 
get the number of rows and column information from the    user, make sure you gonna work with 3x3 matrix

infer all the sample inputs and outputs before you proceed

Sample Input-I
Enter the no. of rows
3
Enter the no. of columns
3
insert the element for 0,0
1
insert the element for 0,1
2
insert the element for 0,2
3
insert the element for 1,0
4
insert the element for 1,1
5
insert the element for 1,2
6
insert the element for 2,0
7
insert the element for 2,1
8
insert the element for 2,2
9

Sample Output-I
The matrix is
1 2 3
4 5 6
7 8 9
Main Diagonal elements are ->1,5,9
Secondary Diagonal elements are ->3,5,7
After interchange, the final matrix is
3 2 3
4 5 6
7 8 7

Sample Input-II
Enter the no. of rows
3
Enter the no. of columns
3
insert the element for 0,0
0
insert the element for 0,1
9
insert the element for 0,2
8
insert the element for 1,0
7
insert the element for 1,1
6
insert the element for 1,2
5
insert the element for 2,0
4
insert the element for 2,1
3
insert the element for 2,2
2

Sample Output-II
The matrix is
0 9 8
7 6 5
4 3 2
Main Diagonal elements are ->0,6,2
Secondary Diagonal elements are ->8,6,4
After interchange, the final matrix is
8 9 8
7 6 5
4 3 4

Sample Input-III
Enter the no. of rows
2
Enter the no. of columns
3

Sample Output-III
Make sure your input matrix should be in 3x3 format*/


#include <stdio.h>

int main(void) {
  int row,col,i,j,m[50][50],sum1=0,sum2=0,sum;
  printf("Enter the no. of rows\n\n");
  scanf("%d",&row);
  printf("Enter the no. of columns\n\n");
  scanf("%d",&col);
  if((row==3)&&(col==3))
  {
  for(i=0;i<row;i++)
  {
  for(j=0;j<col;j++)
  {
  printf("insert the element for %d,%d\n\n",i,j);
  scanf("%d",&m[i][j]);
  }
  }
printf("The matrix is\n");
for(i=0;i<row;i++)
  {
  for(j=0;j<col;j++)
  {
  printf("%d ",m[i][j]);
  if(j==col-1)
  {
  printf("\n");
  }
  }
  }
  printf("\nMain Diagonal elements are->");
  for(i=0;i<row;i++)
  {
  for(j=0;j<col;j++)
  {
  if(i==j)
  {
  
    printf("%d,",m[i][j]);
  }
  
  }
  }
  printf("\nSecondary Diagonal elements are-> ");
  for(i=0;i<row;i++)
  {
  for(j=0;j<col;j++)
  {
  if(i+j==col-1)
  {
  printf("%d,",m[i][j]);
  }
  }
  }
  printf("\nAfter interchange,the final matrix is->\n");
  for(i=0;i<row;i++)
  {
  for(j=0;j<col;j++)
  {
    m[0][0]=m[0][2];
    m[1][1]=m[1][1];
    m[2][2]=m[2][0];
      printf("%d ",m[i][j]);
  if(j==col-1)
  {
  printf("\n");
  }
  }
  }
  }
  else
  {
    printf("Make sure your input matrix should be in 3x3 format");
  }
  return 0;
}
