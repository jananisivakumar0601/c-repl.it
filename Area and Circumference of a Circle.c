/*Write a C program to calculate Area and Circumference of a Circle

you must get the radius through keyboard and pi must be initialised as 3.14

Sample Input

Enter the radius
2.3

Sample Output

area is 16.610600
circumference is 14.444000*/

#include <stdio.h>

int main(void) {
  float r,area,c;
  float pi=3.14;
  printf("Enter the radius\n");
  scanf("%f",&r);
  area=(pi*(r*r));
  c=2*pi*r;
  printf("area is %f \n",area);
  printf("circumference is %f",c);
  
  return 0;
}
