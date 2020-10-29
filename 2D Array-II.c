/*Write a C program to extract the diagonal elements from the matrix and sum it. 
get the number of rows and column information from the user, make sure you gonna work with nxn matrix

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
Diagonal elements are ->1,5,9,3,5,7
Sum of all the elements -> 30

Sample Input-II
Enter the no. of rows
2
Enter the no. of columns
2
insert the element for 0,0
3
insert the element for 0,1
1
insert the element for 1,0
5
insert the element for 1,1
4

Sample Output-II
The matrix is
3 1
5 4
Diagonal elements are->3,4,1,5
Sum of all the elements -> 13

Sample Input-III
Enter the no. of rows
2
Enter the no. of columns
3

Sample Output-III
Make sure your input matrix should be in nxn format*/


#include <stdio.h>

int main(void) {
  int row,col,i,j,m[50][50],sum1=0,sum2=0,sum;
  printf("Enter the no. of rows\n\n");
  scanf("%d",&row);
  printf("Enter the no. of columns\n\n");
  scanf("%d",&col);
  if(row==col)
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
  printf("\nDiagonal elements are->");
  for(i=0;i<row;i++)
  {
  for(j=0;j<col;j++)
  {
  if(i==j)
  {
  printf("%d,",m[i][j]);
  sum1+=m[i][j];
  }
  }
  }
  for(i=0;i<row;i++)
  {
  for(j=0;j<col;j++)
  {
  if(i+j==col-1)
  {
  printf("%d,",m[i][j]);
  sum2+=m[i][j];
  }
  
  }
  }
  sum=sum1+sum2;
  printf("\nSum of all the elements-> %d",sum);
  }
  else
  {
    printf("Make sure your input matrix should be in nxn format");
  }
  return 0;
}
