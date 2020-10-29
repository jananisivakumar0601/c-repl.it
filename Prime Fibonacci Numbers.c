/*Write a C program to Generate Prime Fibonacci Numbers for a given range of fibonacci series

Accept the range as an integer

When you enter the range of fibonacci numbers, don't      consider the first two fibonacci numbers(i.e. 0 & 1)-> so first 10 fibonacci numbers are 1,2,3,5,8,13,21,34,55,89

it's upto you to build the logic by adopting the concept  of modularity

Sample Input-I
Enter the range of fibonacci numbers(please skip first two fibonacci numbers i.e 0 & 1) 
10

Sample Output-I
the prime fibonacci numbers are 
2
3
5
13
89

Sample Input-II
Enter the range of fibonacci numbers(please skip first two fibonacci numbers i.e 0 & 1) 
20

Sample Output-II
the prime fibonacci numbers are 
2
3
5
13
89
233
1597

Sample Input-III
Enter the range of fibonacci numbers(please skip first two fibonacci numbers i.e 0 & 1) 
30

Sample Output-III
the prime fibonacci numbers are 
2
3
5
13
89
233
1597
28657
514229*/




#include <stdio.h>

int main(void) {
  int i,nterm,int1=0,int2=1,next,pi,flag=0;
  printf("\nEnter therange of fibonacci numbers(please skip first two fibonacci numbers i.e 0&1)\n");
  scanf("%d",&nterm);
  printf("the prime fibonacci numbers are");
  for(i=1;i<=nterm;i++)
  {
    next=int1+int2;
    int1=int2;
    int2=next;
    //printf("%d  ",next);
    if(next>1)
    {
      for(pi = 2; pi <= next; ++pi)
      {
        if(next%pi==0)
        {
            break;
        }
      }
        if (next==pi)
          printf("%d\n",next);
    }
  }
  return 0;
}

