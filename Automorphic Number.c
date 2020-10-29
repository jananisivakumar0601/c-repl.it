/*Write a C program to check whether the given number is Automorphic Number or not and also generate Automorphic Numbers between 1 & 1000. 

A number is called Automorphic number if and only if its square ends in the same digits as the number itself.

for example, 76 is Automorphic Number, because 76 * 76 = 5776.

Sample Input-I
1.Choose the option
2.Check Automorphic Number
3.Generate Automorphic Numbers between 1 & 1000
4.Exit
1
Enter a number
1

Sample Output-I
the entered number is a Automorphic Number

Sample Input-II
1.Choose the option
2.Check Automorphic Number
3.Generate Automorphic Numbers between 1 & 1000
4.Exit
1
Enter a number
25

Sample Output-II
the entered number is a Automorphic Number

Sample Input-III
1.Choose the option
2.Check Automorphic Number
3.Generate Automorphic Numbers between 1 & 1000
4.Exit
1
Enter a number
7

Sample Output-III
the entered number is not a Automorphic Number

Sample Input-IV
1.Choose the option
2.Check Automorphic Number
3.Generate Automorphic Numbers between 1 & 1000
4.Exit
2

Sample Output-IV
Automorphic Numbers between 1 & 1000 are
1 5 6 25 76 376 625*/


#include <stdio.h>
#include <stdlib.h>
int main(void) {
  int option,num,square,auto_num,i,sq_root,mor_num,root,phic_num,root_value,phick_num,are,auto1_num;
  printf("Choose the option\n");
  printf("1.Check Automorphic Number\n");
  printf("2.Generate Automorphic Numbers between 1 & 1000\n");
  printf("3.Exit\n");
  scanf("%d",&option);
  switch(option)
  {
    case 1:
    printf("Enter a number\n");
    scanf("%d",&num);
    if(num<=10)
    {
       square=num*num;
       auto_num=square%10;
       if(auto_num==num)
         {
          printf("the entered number is a Automorphic Number\n");
          }
       else
         {
         printf("the entered number is not a Automorphic Number\n");
         } 
     }  
     else
     {
    are=num*num;
    auto1_num=are%100;
    if(auto1_num==num)
       {
          printf("the entered number is a Automorphic Number\n");
       }
    else
      {
         printf("the entered number is not a Automorphic Number\n");
      }
     }
    break;
    case 2:
    printf("Automorphic Numbers between 1 & 1000 are\n");
    for(i=1;i<=1000;i++)
    {
      if(i<=10)
      {
       sq_root=i*i;
       mor_num=sq_root%10;
      }
      if(mor_num==i)
      printf("%d ",i);
      if(i>=11 && i<=100)
      {
         root=i*i;
         phic_num=root%100;
      }
      if(phic_num==i)
      printf("%d ",i);
      if(i>=101 && i<=1000)
      {
         root_value=i*i;
         phick_num=root_value%1000;
      }
      if(phick_num==i)
      printf("%d ",i);
      
    }
      break;
      case 3:
      exit(0);
    }
  return 0;
}
