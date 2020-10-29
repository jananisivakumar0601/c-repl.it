/*Write a program in C to delete an element from an array in a menu driven fashion.
get the size of an array from user, assume you gonna work with integer arrays

You should go for option1(Insert operation) first and try to follow the flow as given in the Sample Input & Sample  Output

Sample Input-I
What do you want to do

1.Insert
2.Delete
3.Display
4.Exit
1
Enter the size of the array
10
Input 10 integer numbers
1
3
1
3
4
5
6
7
8
5
What do you want to do

1.Insert
2.Delete
3.Display
4.Exit
2
Which element you want to delete from the given array
1
The element 1 found in the following positions
0
2
Which index you’re targeting?
0
Sample Output-I
The element 1 at the index 0 removed successfully
What do you want to do

1.Insert
2.Delete
3.Display
4.Exit
3
3
1
3
4
5
6
7
8
5
What do you want to do

1.Insert
2.Delete
3.Display
4.Exit
4
Sample Input-II
What do you want to do

1.Insert
2.Delete
3.Display
4.Exit
1
Enter the size of the array
5
Input 5 integer numbers
2
3
4
5
6
What do you want to do

1.Insert
2.Delete
3.Display
4.Exit
2
Which element you want to delete from the given array
1
Sample Output-II
The element 1 was not found in the given array
What do you want to do

1.Insert
2.Delete
3.Display
4.Exit
4*/


#include<stdio.h>
#include<stdlib.h>
int choice,size,arr[30],b[30],i,del,target,k,j;
void insert();
void delete();
void display();
int main()
{
  do
  {
  printf("What do you want to do\n");
  printf("1.Insert\n2.Delete\n3.Display\n4.Exit\n");
  scanf("%d",&choice);
  switch(choice)
  {
  case 1: insert();
           break;
  case 2: delete();
           break;
  case 3: display();
          break;
  case 4: exit(0);
  default:
      printf("Invaid choice");
}
}while(choice!=4);
return 0;
}

void insert()
{
  printf("Enter the size of the array\n");
  scanf("%d",&size);
  printf("Input %d integer numbers\n",size);
  for(i=0;i<size;i++)
  {
    scanf("%d",&arr[i]);
  }
}  
 void delete()
 {
     k=0;
     printf("Which element you want to delete from the given array\n");
     scanf("%d",&del);
     for(i=0;i<size;i++)
     {
         if(del==arr[i])
         {
            b[k]=i;
            k++;
         }
     }
         if(k>0)
         {
             printf("The element %d found in the following positions\n",del);
             for(i=0;i<k;i++)
             printf("%d\n",b[i]);
         }
         if(k==0)
         {
             printf("The element %d was not found in the given array\n",del);
         }
      if(k>0)
      {
          printf("Which index you're targeting?\n");
          scanf("%d",&target);
          for(i=0;i<size;i++)
          {
              if(i==target)
              {
                for(j=i;j<size;j++)
                {
                    arr[j]=arr[j+1];
                }
                size--;
                  
              }
              
          }
   printf("The element %d at the index %d removed successfully\n",del,target);
      }

}
  
  void display()
  {
    int i;
    for(i=0;i<size;i++)
    {
      printf("%d\n",arr[i]);
    }
  }
