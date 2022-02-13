/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() 
{
  float d,x1,x2,x3;
  printf("Van Travell Distance : ");
  scanf("%f",&d);
  if(d<=30)
  {
  	x3=d*50;
  	
  }
  else if(d>30)
  {
  	x2=d-30;
  	x3=30*50 + x2*40;
  }
  printf("Total Amount is : %.2f",x3);
  return 0;
}

