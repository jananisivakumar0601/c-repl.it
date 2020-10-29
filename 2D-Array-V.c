/*
Write a C program to check whether the matrix is Sparse matrix or not. 
Sparse matrix is a special matrix with most of its      elements are zero. The matrix is sparse matrix if 
T ≥ ((m * n) / 2 ); where T defines total number of zero elements, m - no. of rows and n - no. of columns. 

get the number of rows and column information from the  user, make sure you gonna work with arbitrary sized     matrix

infer all the sample inputs and outputs before you      proceed.

Sample Input-I
Enter the no. of rows
3
Enter the no. of columns
3
insert the element for 0,0
0
insert the element for 0,1
1
insert the element for 0,2
0
insert the element for 1,0
2
insert the element for 1,1
5
insert the element for 1,2
6
insert the element for 2,0
0
insert the element for 2,1
8
insert the element for 2,2
0

Sample Output-I
The matrix is
0 1 0
2 5 6
0 8 0
The given matrix is sparse matrix.

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
The given matrix is not a sparse matrix.

Sample Input-III
Enter the no. of rows
2
Enter the no. of columns
2
insert the element for 0,0
0
insert the element for 0,1
9
insert the element for 1,0
8
insert the element for 1,1
7

Sample Output-III
The matrix is 
0 9
8 7
The given matrix is not a sparse matrix.*/



#include <stdio.h>

int main(void) {
  int row,col,i,j,m[50][50],tot=0,count=0;
  printf("Enter the no. of rows\n\n");
  scanf("%d",&row);
  printf("Enter the no. of columns\n\n");
  scanf("%d",&col);
  tot=(row*col)/2;
  for(i=0;i<row;i++)
  {
  for(j=0;j<col;j++)
  {
  printf("insert the element for %d,%d\n\n",i,j);
  scanf("%d",&m[i][j]);
  if(m[i][j]==0)
  {
    count++;
  }
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
if(count>=tot)
  printf("\nThe given matrix is sparse matrix.");
else
printf("\nThe given matrix is not a sparse matrix.");

  
      return 0;
}
