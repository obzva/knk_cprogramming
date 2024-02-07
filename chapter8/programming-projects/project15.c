/*
 * Caesar cipher
 */

#include <stdio.h>

#define SIZE 80

int main(void)
{
  char message[SIZE] = {0}, c;
  int i, length = 0, shift;

  printf("Enter message to be encrypted: ");
  while ((c = getchar()) != '\n') {
    message[length] = c;
    length++;
  }

  printf("Enter shift amount (1-25): ");
  scanf("%d", &shift);

  if (shift < 1 || 25 < shift) {
    printf("Invalid number for shift\n");
    return 1;
  }

  printf("Encrypted message: ");
  for (i = 0; i < length; i++) {
    if ('a' <= message[i] && message[i] <= 'z') {
      message[i] -= 'a';
      message[i] += shift;
      message[i] %= 26;
      message[i] += 'a';
    } else if ('A' <= message[i] && message[i] <= 'Z') {
      message[i] -= 'A';
      message[i] += shift;
      message[i] %= 26;
      message[i] += 'A';
    }
    printf("%c", message[i]);
  }
  printf("\n");

  return 0;
}
