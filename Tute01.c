/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{
  int num1,num2;
  float avg;
  
  printf("Enter Subject 1 Marks : ");
  scanf("%d",&num1);
  printf("Enter Subject 2 Marks : ");
  scanf("%d",&num2);
  avg = (num1+num2)/2.0;
  printf("Average is : %.2f",avg);
  
  return 0;
}