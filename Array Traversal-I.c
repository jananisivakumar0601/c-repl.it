/*Write a C program to search an element in an array.
Assume you gonna use an integer array

Get the size of the array from the user

Allocate the memory dynamically through the use of        calloc() call

Get the element to be searched from the user and traverse through the array elements

Sample Input-I
Enter the size of the array
10
Input 10 integer numbers
2
9
1
0
8
6
4
3
7
5
Enter the element to be searched
0

Sample Output-I
40 bytes allocated successfully
Element 0 found at index 3

Sample Input-II
Enter the size of the array
5
Input 5 integer numbers
17
4
32
3
1
Enter the element to be searched
0

Sample Output-II
20 bytes allocated successfully
The element 0 is not found in the given array*/




#include <stdio.h>

int main(void) {
int n,i,arr[i],search,size;
printf("Enter the size of the array \n");
scanf("%d",&n);
printf("Input %d integer numbers \n",n);
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
printf("Enter the element to be searched \n");
scanf("%d",&search);
size=4*n;
printf("%d bytes allocated successfully\n",size);
for(i=0;i<n;i++)
{
if(search==arr[i]){
  printf("Element %d found at index %d\n",search,i);
  break;
    }
}


if(i==n)
 {
 printf("The element %d is not found in the given array\n",search);
 
   
 }

  return 0;
}
