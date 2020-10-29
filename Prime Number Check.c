/*Accept a positive integer through keyboard, you must have logics for the following checks prime, nonprime and neither prime nor composite
do use an appropriate flag variable
Sample Input
Enter a positive integer:
2

Sample Output
2 is a prime number.

Sample Input
Enter a positive integer:
4

Sample Output
4 is not a prime number.

Sample Input
Enter a positive integer:
1

Sample Output
1 is neither a prime nor a composite number.*/

#include<stdio.h>
int main()
{
  int n,i,flag=0;
  printf("\n Enter a positive integer:");
  scanf("%d",&n);
  for(i=2;i<=n/2;++i)
  {
    if(n%i==0)
    {
      flag=1;
      break;
    }
  }
  if(n==1)
  {
    printf("i is neither a prime nor a composite number");
  }
  else
  {
    if(flag==0)
    printf("%d is a prime number.",n);
    else
    printf("%d is not a prime number.",n);
  }
  return 0;
  }
  
  //Using counter to check prime number or not//


#include <stdio.h>

int main()
{
    int number,i,count=0;
    printf("Enter a positive integer:\n");
    scanf("%d",&number);
    if(number==1)
    printf("1 is neither a prime nor a composite number.");
    else
    {
        for(i=2;i<number;i++)
        {
            if(number%i==0)
            count++;
        }
        if(count==0)
         printf("%d is a prime number.",number);
       else
       printf("%d is not a prime number.",number);
    }

    return 0;
}
  
