/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int num1,num2;
  float avg,sum;
  
  printf("Enter Mark 01 : ");
  scanf("%d",&num1);

  printf("Enter Mark 02 : ");
  scanf("%d",&num2);

  sum=num1+num2;
  avg=sum/2.0;

  printf("Avarage is : %.2f ",avg);
  
  return 0;
}

