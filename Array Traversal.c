/*Write a program in C to find the sum of all elements of the array.
get the size of an array from user, assume you gonna work with integer arrays

Sample Input-I
Enter the size of the array
10
Input 10 integer numbers
1
3
1
3
4
5
6
7
8
5

Sample Output-I
The sum of the array elements 
43

Sample Input-II
Enter the size of the array
5
Input 5 integer numbers
0
8
6
3
1

Sample Output-II
The sum of the array elements
18*/

#include <stdio.h>

int main(void) {
  int n,i,arr[i],sum=0;
printf("Enter the size of the array \n");
scanf("%d",&n);
printf("Input %d integer numbers \n",n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
sum=sum+arr[i];
}
printf("The sum of the array elements %d",sum);
  return 0;
}
