/*Write a C program to find sum of each row and column of a matrix
get the number of rows and column information from the    user, make sure you gonna work with arbitrary matrix

infer all the sample inputs and outputs before you proceed.

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
Sum of row1->6
Sum of row2->15
Sum of row3->24
Sum of column1->12
Sum of column2->15
Sum of column3->18

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
Sum of row1->17
Sum of row2->18
Sum of row3->9
Sum of column1->11
Sum of column2->18
Sum of column3->15

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
Sum of row1->9
Sum of row2->15
Sum of column1->8
Sum of column2->16*/



#include <stdio.h>

int main(void) {
  int row,col,i,j,m[50][50],sum=0,sum1=0;
  printf("Enter the no. of rows\n\n");
  scanf("%d",&row);
  printf("Enter the no. of columns\n\n");
  scanf("%d",&col);
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
  for(i=0;i<row;i++)
  {
    for(j=0;j<col;j++)
    {
        sum+=m[i][j];
    }
  printf("Sum of row%d->%d\n",i+1,sum);
  sum=0;
    }
    for(j=0;j<col;j++)
  {
    for(i=0;i<row;i++)
    {
        sum1+=m[i][j];
    }
  printf("Sum of column%d->%d\n",j+1,sum1);
  sum1=0;
    }
  
      return 0;
}
