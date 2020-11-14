/*Write a C program to left rotate an array by n position and right rotate by n position in a menu driven fashion.

get the size of the array thru console

infer all the sample inputs and outputs thoroughly before you proceed

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
Want to perform left rotate or right rotate?
1.Left rotate
2.Right rotate
1
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
Want to perform left rotate or right rotate?
1.Left rotate
2.Right rotate
2
Input number of times to rotate
4

Sample Output-II
Array after right rotation 4 time(s)
7
8
9
10
1
2
3
4
5
6

Sample Input-III
Enter the size of the array
5
Input 5 numbers
8
1
3
4
0
Want to perform left rotate or right rotate?
1.Left rotate
2.Right rotate
1
Input number of times to rotate
1

Sample Output-III
Array after left rotation 1 time(s)
1
3
4
0
8

Sample Input-IV
Enter the size of the array
5
Input 5 numbers
8
1
3
4
0
Want to perform left rotate or right rotate?
1.Left rotate
2.Right rotate
2
Input number of times to rotate
1

Sample Output-IV
Array after right rotation 1 time(s)
0
8
1
3
4  */



#include <stdio.h>

int main(void) {
 int arr[100],size,i,rot,num;
 printf("Enter the size of the array\n");
 scanf("%d",&size);
 printf("Input %d numbers\n",size);
 for(i=1;i<=size;i++)
 {
 scanf("%d",&arr[i]);
 }
 printf("Want to perform left rotate or right rotate?\n1.Left Rotate\n2.Right Rotate\n");
 scanf("%d",&num);
 switch(num)
 {
  case 1:
 printf("Input number of times to rotate\n");
 scanf("%d",&rot);
 printf("Array after left rotation %d time(s)\n",rot);
 for(i=rot+1;i<=size;i++)
 {
     printf("%d\n",arr[i]);
 }
 for(i=1;i<=rot;i++)
 {
     printf("%d\n",arr[i]);
 }
 break;
 case 2:
 printf("Input number of times to rotate\n");
 scanf("%d",&rot);
 printf("Array after right rotation %d time(s)\n",rot);
 for(i=(size-rot)+1;i<=size;i++)
 {
     printf("%d\n",arr[i]);
 }
 for(i=1;i<=(size-rot);i++)
 {
     printf("%d\n",arr[i]);
 }
 break;
 }
  return 0;
}
