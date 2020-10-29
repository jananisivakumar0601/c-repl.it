/*Write a C program to separate positive and negative numbers using arrays
Get the size of an array from user, assume you gonna work with integer arrays

Get the elements through keyboard, make sure at-least 30% of the elements should be negative numbers

Finally display positive numbers and negative numbers     separately in an ascending order.

Sample Input
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

Sample Output
Positive numbers are
0
2
3
5
7
8
9
Negative numbers are
-6
-4
-1*/

#include <stdio.h>

int main(void) {
  int arr[100],p[100],n[100];
  int i,size,temp,j;
  int cp=0,cn=0;
  printf("Enter the size of the array\n");
  scanf("%d",&size);
  printf("Input %d integer numbers\n",size);
  for(i=0;i<size;i++){
    scanf("%d",&arr[i]);
  }
  for(i=0;i<size;i++){
    for(j=i+1;j<size;j++){
        if(arr[i] > arr[j]){
          temp=arr[i];
          arr[i]=arr[j];
          arr[j]=temp;
           }
  }
  }
  printf("Positive numbers are\n");
  for(i=0;i<size;i++){
   if(arr[i]>=0){
      printf("%d\n",arr[i]);
    }
 }
 printf("Negative numbers are\n");
for(i=0;i<size;i++){
  if(arr[i]<0){
    printf("%d\n",arr[i]);
  }
}
  return 0;
}

