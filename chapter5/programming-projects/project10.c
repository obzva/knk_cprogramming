/*
 * Display letter grade from numerical grade
 */

#include <stdio.h>

int main(void)
{
  int grade;

  printf("Enter numerical grade: ");
  scanf("%d", &grade);

  if (grade > 100 || grade < 0) {
    printf("Error: Grade cannot be greater than 100 or less than 0\n");
    return 0;
  }

  printf("Letter grade: ");

  grade /= 10;

  switch (grade) {
    case 10:
    case 9:
      printf("A\n");
      return 0;
    case 8:
      printf("B\n");
      return 0;
    case 7:
      printf("C\n");
      return 0;
    case 6:
      printf("D\n");
      return 0;
    default:
      printf("F\n");
      return 0;
  }
}
