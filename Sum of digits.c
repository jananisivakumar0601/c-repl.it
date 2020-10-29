/*Write a C program to accept either string/integer and find sum of digits in it

accept the input through keyboard

your logic should work for both string and integer

for string, substitute number equivalent for alphabets, 1 for a, 2 for b,….,26 for z

make sure the final output should be a single digit number-> 18767986->1+8+7+6+7+9+8+6->52->5+2-> 7

Sample Input-I
What do you want to choose
1.String
2.Integer
2
Enter the number
234

Sample Output-I
Sum of digits is 9

Sample Input-II
What do you want to choose
1.String
2.Integer
1
Enter the string
text

Sample Output-II
The number equivalent of a given text is
2052420
Sum of digits is 6*/




#include<stdio.h>
#include<string.h>
int choice,num,rem,sum=0,i,j,count,sum1=0,rem1,equi=0,k=0,a[20];
 int main()    
{    


//char *ptr=str;

char str[100];
printf("What do you want to choose");
printf("\n1.String\n2.Integer\n");
scanf("%d",&choice);
switch(choice)
{
  case 1:
  printf("Enter the String\n");
  scanf("%s",str);
  char alph[27]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
  printf("The number equivalent of a given %s is\n",str);
  for(i=0;i<strlen(str);i++)
  {
    for(j=0;j<=26;j++)
    {
    if(str[i]==alph[j])
    {
    a[k]=j+1;
    equi+=a[k];
    k++;
    }
    }
  }    
  for(k=0;k<strlen(str);k++)
  printf("%d",a[k]);
  
  while(equi!=0)
  {
  rem1=equi%10;
  sum1+=rem1;
  equi=equi/10;
  if(equi==0 && sum1>9)
  {
    equi=sum1;
    sum1=0;
  }
  }
  printf("\nSum of digits is %d",sum1);
  break;
  case 2:
  printf("Enter the number\n");
  scanf("%d",&num);
  while(num)
  {
    rem=num%10;
    sum+=rem;
    num=num/10;
    if(num==0 && sum>9)
  {
    num=sum;
    sum=0;
  }
  }
  printf("Sum of digits is %d",sum);
  break;
}
return 0;  
}   
