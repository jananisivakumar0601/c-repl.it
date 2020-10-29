/*Write a C program for finding factorial of a given number by using recursion.
Make sure you should use a user defined find_fact(int)    function and that should call itself for factorial calculation

I request you to not modify the structure of the given code

Sample Input
Enter a number
5

Sample Output
Factorial of 5 is 120*/


#include <stdio.h>
int find_fact(int);

int main(void) {
  //get the input from the user and pass the same to find_fact
  int num;
printf("Enter a number");
scanf("%d",&num);
printf("Factorial of %d is %d",num,find_fact(num));
  return 0;
}
int find_fact(int n){
  //find_fact() should call itself for backward traversal
  if(n==1)
  return 1;
  else
  return(n*find_fact(n-1));
}
