/*Write a C program to perform the following using Arrays,

get the size of an array from user, assume you gonna work with integer arrays
write 4 user defined functions for
i. to display the array contents in an ascending order
ii. to display the array contents in a descending order
iii. to display the second largest element in an array
iv. to display the second smallest element in an array

Sample Input-I
Enter the size of the array
10
Input 10 integer numbers
3
9
0
-1
5
2
-6
7
-4
8
Sample Output-I
array contents in an ascending order are
-6
-4
-1
0
2
3
5
7
8
9
array contents in a descending order are
9
8
7
5
3
2
0
-1
-4
-6
second largest element in a given array is 
8
second smallest element in a given array is 
-4*/


#include <stdio.h>
void ascend(int number[],int n)
{
   printf("array contents in ascending order are\n");
   int i,j,a;
   for (i = 0; i < n; ++i) 
      {
        for (j = i+1;j<n;++j)
          {
              if (number[i]>number[j]) 
                {
                  a=number[i];
                  number[i]=number[j];
                  number[j]=a;
                }
          }
        }
        for(i=0;i<n;i++)
        {
          printf("%d\n",number[i]);
        }
}
void descend(int number[],int n)
{
   printf("array contents in descending order are\n");
   int i,j,a;
   for (i = 0; i < n; ++i) 
      {
        for (j = i+1;j<n;++j)
          {
              if (number[i]<number[j]) 
                {
                  a=number[i];
                  number[i]=number[j];
                  number[j]=a;
                }
          }
        }
        for(i=0;i<n;i++)
        {
          printf("%d\n",number[i]);
        }
}
void largest(int number[],int n)
{
   printf("Second largest element in a given array is\n");
   int i,j,a;
   for (i = 0; i < n; ++i) 
      {
        for (j = i+1;j<n;++j)
          {
              if (number[i]<number[j]) 
                {
                  a=number[i];
                  number[i]=number[j];
                  number[j]=a;
                }
          }
        }
          printf("%d\n",number[1]);
}
void smallest(int number[],int n)
{
   printf("second smallest element in a given array is\n");
   int i,j,a;
   for (i = 0; i < n; ++i) 
      {
        for (j = i+1;j<n;++j)
          {
              if (number[i]>number[j]) 
                {
                  a=number[i];
                  number[i]=number[j];
                  number[j]=a;
                }
          }
        }
          printf("%d\n",number[1]);
}

int main(void) {
  int number[30],n,i;
  printf("Enter the size of the array\n");
  scanf("%d",&n);
  printf("Input %d integer numbers\n",n);
  for (i = 0; i < n; ++i)
            scanf("%d", &number[i]);
 ascend(number,n);
 descend(number,n);
 largest(number,n);
 smallest(number,n);
  return 0;
}
