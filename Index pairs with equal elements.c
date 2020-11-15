/*Write a C program to count total number of indices(i,j) such that arr[i]=arr[j] & i != j
In simple terms, in a given array of size n, count the index pairs with equal elements. 
For eg, if the input array is {1,1,2}, then output is 1, because index 0 and index 1 holds same value

Get the array size and elements from the user through console.

Sample Input-I
Enter the size of the array
5
Input 5 elements 
0
1
1
2
2

Sample Output-I
Result is 2

Sample Input-II
Enter the size of the array
10
Input 10 elements 
1
2
3
4
5
6
7
8
9
10

Sample Output-II
Result is 0

Sample Input-III
Enter the size of the array
10
Input 10 elements 
1
1
1
2
3
3
4
4
5
5

Sample Output-III
Result is 5  */


#include <stdio.h>

int main(void) {
  int arr[100],size,i,j,k=0;
  printf("Enter the size of the array\n");
  scanf("%d",&size);
  printf("Input %d elements\n",size);
  for(i=0;i<size;i++)
  scanf("%d",&arr[i]);
  for(i=0;i<size;i++)
  {
    for(j=i+1;j<size;j++)
    {
        if(arr[i]==arr[j] && arr[j]!=arr[j+1])
        {
        arr[k]=arr[i];
        //printf("%d",arr[k]);
        k++;
        }
      }
    }
  printf("Result is %d",k);
  return 0;
}
