/*Write a C program to Replace duplicates with greater than previous duplicate value

Given an array of elements and change the array in such a way that all the elements on the array are distinct.

if you are replacing a value, then the replacing value should be great than the previous value and after modification sum of the elements should be as less as possible.

Infer the problem statement throughly through sample inputs and outputs

Sample Input-I
Enter the size of the array
7
Enter 7 elements
1
2
2
5
8
8
8

Sample Output-I
Result after replacing duplicates
1
2
3
5
8
9
10

Sample Input-II
Enter the size of the array
7
Enter 7 elements
1
2
5
7
8
8
7

Sample Output-II
Result after replacing duplicates
1
2
5
7
8
9
10

Sample Input-III
Enter the size of the array
5
Enter 5 elements
9
9
9
9
9

Sample Output-III
Result after replacing duplicates
9
10
11
12
13*/



#include <stdio.h>

int main(void) {
  int n,i,j,a[20];
  printf("Enter the size of the array\n");
  scanf("%d",&n);
  printf("Enter %d elements\n",n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(a[i]==a[j])
      {
        a[j]=a[j]+1;
        
      }
    }
  }
  printf("Result after replacing duplicates\n");
  for(i=0;i<n;i++)
  {
    printf("%d\n",a[i]);
  }
  return 0;
}


