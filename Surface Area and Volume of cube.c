/*Write a C program to find the surface area and volume of a cube using pow() method
Accept the length of a side using keyboard
Sample Input
Enter the length of a side
34

Sample Output
Surface area = 6936.000000 and Volume = 39304.000000*/

#include <stdio.h>
#include <math.h>
int main(void) {
  double l,area,volume;
  printf("Enter the length of a side\n");
  scanf("%lf",&l);
  area=(6*(l*l));
  volume=pow(l,3);
  printf("Surface area=%lf",area);
  printf(" and ");
   printf("Volume=%lf",volume);
  return 0;
}
