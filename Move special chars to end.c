/*Write a C program to move all the special characters to end of the string.

get the input string from the user through console

Give the consideration for following special characters
~,!,@,#,$,%,^,&,*,?

Sample Input-I
Enter the input string
H##!~e?*%&l~lo A!~?s?%@pi~$r&$$a??n#t~s!

Sample Output-I
The final output is 
Hello Aspirants##!~?*%&~!~??%@~$&$$??#~!

Sample Input-II
Enter the input string
T@e!c&&h@i*e N?e@r##d~~s&

Sample Output-II
The final output is
Techie Nerds@!&&@*?@##~~&

*/

#include <stdio.h>
#include <string.h> 
 int main() 
 { 
	char str[50],a[50],b[50];
	int i,l,j=0,k=0;
	printf("Enter the input string\n");
	scanf("%[^\n]s",str);
	l=strlen(str);
	printf("The final output is\n");
	for(i=0;i<l;i++)
	{
		if(str[i]=='&'||str[i]=='#'||str[i]=='~'||str[i]=='!'||str[i]=='@'||str[i]=='$'||str[i]=='%'||str[i]=='^'||str[i]=='*'||str[i]=='?')
		{
 	  
 	  a[j]=str[i];    //moving special characters to one array and incrementing..
 	  j++;
 	  }
 	  }
 	  for(i=0;i<l;i++)
	  {
		if(str[i]!='&'&&str[i]!='#'&&str[i]!='~'&&str[i]!='!'&&str[i]!='@'&&str[i]!='$'&&str[i]!='%'&&str[i]!='^'&&str[i]!='*'&&str[i]!='?')
		{
 	  
 	  b[k]=str[i];   //moving alphabets to another array and incrementing..
 	  k++;
 	  }
 	  
 	  }
strcat(b,a);    //concatenating both the arrays and printing them in order
printf("%s",b);

 	   return 0; 
 	   }





