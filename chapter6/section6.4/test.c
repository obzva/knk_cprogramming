#include <stdio.h>

int main(void)
{
  for (int i = 10; i >= 1; i /= 2) {
    printf("%d ", i++);
  }

  return 0;
}
