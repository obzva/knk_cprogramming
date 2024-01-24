#include <stdio.h>

int main(void)
{
  char c;

  printf("Enter phone number: ");
  while (1) {
    c = getchar();
    if (c == '\n') break;
  }

  return 0;
}
