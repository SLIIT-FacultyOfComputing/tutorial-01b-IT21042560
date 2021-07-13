/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  float mark1,mark2,total,avg;

  printf("Enter your mark 01 : ");
  scanf("%f",&mark1);

  printf("Enter the mark 02 : ");
  scanf("%f",&mark2);

  total = mark1 +mark2;
  avg = total / 2;

  printf("Average of the marks : %.2f\n",avg);

  return 0;
}

