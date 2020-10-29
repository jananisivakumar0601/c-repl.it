/*Write a C program to calculate the sum of all the elements in a matrix
get the number of rows and column information from the user

Sample Input-I
Enter the no. of rows
3
Enter the no. of columns
3
insert the element for 0,0
2
insert the element for 0,1
3
insert the element for 0,2
4
insert the element for 1,0
1
insert the element for 1,1
7
insert the element for 1,2
9
insert the element for 2,0
6
insert the element for 2,1
4
insert the element for 2,2
5
Sample Output-I
The matrix is
2 3 4
1 7 9
6 4 5
Sum of all the elements -> 41

Sample Input-II
Enter the no. of rows
2
Enter the no. of columns
4
insert the element for 0,0
3
insert the element for 0,1
1
insert the element for 0,2
9
insert the element for 0,3
6
insert the element for 1,0
5
insert the element for 1,1
4
insert the element for 1,2
2
insert the element for 1,3
0

Sample Output-II
The matrix is
3 1 9 6
5 4 2 0
Sum of all the elements -> 30*/


#include <stdio.h>

int main(void) {
  int row,col,i,j,m[50][50],sum=0;
  printf("Enter the no.of.rows\n");
  scanf("%d",&row);
  printf("Enter the no.of.columns\n");
  scanf("%d",&col);
  for(i=0;i<row;i++)
  {
  for(j=0;j<col;j++)
  {
  printf("\ninsert the element for %d,%d",i,j);
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
  sum+=m[i][j];
  
  }
  }
  printf("\nSum of all the elements->%d",sum);
  return 0;
}
