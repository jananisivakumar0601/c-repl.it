/*Write a C program to count pairs in array whose sum is divisible by k.

Given an array arr[] and a positive integer k, the task is to count total number of pairs in the array whose sum is divisible by k.

for example, if arr[]={1,2,3,4,5,6} and k=3, then output is 5, because the following pairs’ sum divisible by k, (1,2), (1,5),(2,4),(3,6),(4,5).

Get the size of the array, array elements and the value of k through the console.

Sample Input-I
Enter the size of the array
6
Input 6 elements
2
2
1
7
5
3
Enter the value for k
4

Sample Output-I
Result is 5

Sample Input-II
Enter the size of the array
7
Input 7 elements
5
9
36
74
52
31
42
Enter the value for k
3

Sample Output-II
Result is 7 */



#include <stdio.h>

int main(void) {
 int arr[100],size,i,j,k,sum,count=0;
 printf("Enter the size of the array\n");
 scanf("%d",&size);
 printf("Input %d elements\n",size);
 for(i=0;i<size;i++)
 scanf("%d",&arr[i]);
 printf("Enter the value for k\n");
 scanf("%d",&k);
 for(i=0;i<size;i++)  // taking each element in an array and the next element in an array iterating till the end of the array. 
 {
   for(j=i+1;j<size;j++)
   {
     sum=arr[i]+arr[j];  // Adding and modulo to count the pairs in an array
     if(sum%k==0)
     {
       count++;
     }
   }
 }
 printf("Result is %d",count);
  return 0;
}
