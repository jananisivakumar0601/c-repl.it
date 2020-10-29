/*Write a C program to read a line of text and reverse it using recursive function 

get a char array of meaningful data from the user and pass it to a recursive function, let the function read it and reverse it by 
traversing through the array elements and finally mention the palindrome status.

Sample Input-I
Enter your string
data
Sample Output-I
Entered string is 
data
Reversed string is 
atad
Palindrome string- No
Sample Input-II
Enter your string
level
Sample Output-II
Entered string is 
level
Reversed string is 
level
Palindrome string- Yes*/


#include<stdio.h>
int main()
{
char name[20],reverse_name[20];
int i,n,length=0;
printf("Enter your string\n");
scanf("%s",name);
printf("Entered string is \n %s \n",name);
for(i=0;name[i]!='\0';i++)
{
length++;
}
for(i=length-1;i>=0;i--)
{
reverse_name[length-i-1]=name[i];
}
for(n=1,i=0;i<length;i++)
{
if(reverse_name[i]!=name[i])n=0;
}
printf("Reversed string is\n %s \n",reverse_name);
if(n==1)
printf("Palindrome string- Yes");
else
printf("Palindrome string - No");
return 0;
}
