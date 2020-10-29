/*Write a C program that clears to zero all the edge elements of an MXN matrix. 

get the number of rows and column information from the user, make sure you gonna work with MXN matrix

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
1	2	3
4	5	6
7	8	9
Result is
0	0	0
0	5	0
0	0	0

Sample Input-II
Enter the no. of rows
4
Enter the no. of columns
4
insert the element for 0,0
1
insert the element for 0,1
2
insert the element for 0,2
3
insert the element for 0,3
4
insert the element for 1,0
5
insert the element for 1,1
6
insert the element for 1,2
7
insert the element for 1,3
8
insert the element for 2,0
9
insert the element for 2,1
10
insert the element for 2,2
11
insert the element for 2,3
12
insert the element for 3,0
13
insert the element for 3,1
14
insert the element for 3,2
15
insert the element for 3,3
16

Sample Output-II
The matrix is
1	2	3	4
5	6	7	8
9	10	11	12
13	14	15	16
Result is
0	0	0	0
0	6	7	0
0	10	11	0
0	0	0	0*/


#include <stdio.h>

int main(void) {
  int row,col,i,j,m[50][50];
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
printf("Result is\n");
for(i=0;i<row;i++)
  {
  for(j=0;j<col;j++)
  {
  if((i==0)||(j==0)||(i==row-1)||(j==col-1)){
  m[i][j]=0;
  }
  printf("%d ",m[i][j]);
  if(j==col-1)
  {
  printf("\n");
  }
  }
  }
 return 0;
}


