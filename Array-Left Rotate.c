/*Write a C program to left rotate an array by n position.
get the size of the array thru console

Sample Input-I
Enter the size of the array
10
Input 10 numbers
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
Input number of times to rotate
4

Sample Output-I
Array after left rotation 4 time(s)
5
6
7
8
9
10
1
2
3
4

Sample Input-II
Enter the size of the array
5
Input 5 numbers
8
1
3
4
0
Input number of times to rotate
1
Sample Output-II
Array after left rotation 1 time(s)
1
3
4
0
8 */


#include <stdio.h>

int main(void) {
 int arr[100],size,i,rot,d;
 printf("Enter the size of the array\n");
 scanf("%d",&size);
 printf("Input %d numbers\n",size);
 for(i=1;i<=size;i++)
 {
 scanf("%d",&arr[i]);
 }
 printf("Input number of times to rotate\n");
 scanf("%d",&rot);
 printf("Array after left rotation %d time(s)\n",rot);
 for(i=rot+1;i<=size;i++)
 {
     printf("%d\n",arr[i]);  //Adding one to rot and iterating till end size of the array and printing... 
 }
 for(i=1;i<=rot;i++)
 {
     printf("%d\n",arr[i]);   //Iterating from first valueto rot and printing them...
 }
  return 0;
}
