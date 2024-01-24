/* Prints a table of squares using a while statement */

#include <stdio.h>

int main(void)
{
  int i, n;
  char c;
  
  printf("This program prints a table of squares.\n");
  printf("Enter number of entries in table: ");
  scanf("%d", &n);
  getchar();

  for (i = 0; i < n; i++) {
    if (i != 0 && i % 24 == 0) {
      while (1) {
        printf("Press Enter to continue...");
        c = getchar();
	if (c == '\n') {
          break;
	}
      }
    }
    printf("%10d%10d\n", i + 1, i * i + 2 * i + 1);
  }

  return 0;
}
