/*
 * Number to english converter
 */

#include <stdio.h>

int main(void)
{
  int n1, n2;

  printf("Enter a two-digit number: ");
  scanf("%d", &n1);

  if (n1 < 10 || 99 < n1) {
    printf("Error: You should enter a valid two-digit number (from 10 to 99)\n");
    return 0;
  }

  printf("You entered the number ");

  if (n1 == 10) {
    printf("ten\n");
    return 0;
  } else if (n1 == 11) {
    printf("eleven\n");
    return 0;
  } else if (n1 == 12) {
    printf("twelve\n");
    return 0;
  } else if (n1 == 13) {
    printf("thirteen\n");
    return 0;
  } else if (n1 == 14) {
    printf("fourteen\n");
    return 0;
  } else if (n1 == 15) {
    printf("fifteen\n");
    return 0;
  } else if (n1 == 16) {
    printf("sixteen\n");
    return 0;
  } else if (n1 == 17) {
    printf("seventeen\n");
    return 0;
  } else if (n1 == 18) {
    printf("eighteen\n");
    return 0;
  } else if (n1 == 19) {
    printf("nineteen\n");
    return 0;
  }

  n2 = n1 % 10;
  n1 /= 10;

  switch (n1) {
    case 2:
      printf("twenty");
      break;
    case 3:
      printf("thirty");
      break;
    case 4:
      printf("forty");
      break;
    case 5:
      printf("fifty");
      break;
    case 6:
      printf("sixty");
      break;
    case 7:
      printf("seventy");
      break;
    case 8:
      printf("eighty");
      break;
    case 9:
      printf("ninety");
      break;
  }

  if (n2 == 0) {
    printf("\n");
    return 0;
  }

  printf("-");

  switch (n2) {
    case 1:
      printf("one\n");
      return 0;
    case 2:
      printf("two\n");
      return 0;
    case 3:
      printf("three\n");
      return 0;
    case 4:
      printf("four\n");
      return 0;
    case 5:
      printf("five\n");
      return 0;
    case 6:
      printf("six\n");
      return 0;
    case 7:
      printf("seven\n");
      return 0;
    case 8:
      printf("eight\n");
      return 0;
    case 9:
      printf("nine\n");
      return 0;
  }
}
