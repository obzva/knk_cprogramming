#include <stdio.h>

int main(void)
{
  int prefix, group, registrant, publication, check;
  
  printf("Enter ISBN: ");
  scanf("%d-%d-%d-%d-%d", &prefix, &group, &registrant, &publication, &check);

  printf("GS1 prefix      : %d\n", prefix);

  printf("Group identifier: %d\n", group);

  printf("Publisher code  : %d\n", registrant);

  printf("Item number     : %d\n", publication);

  printf("Check digit     : %d\n", check);

  return 0;
}
