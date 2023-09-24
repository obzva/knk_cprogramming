#include <stdio.h>

int main(void)
{
  int item, month, date, year;
  float price;

  printf("Enter item number: ");
  scanf("%d", &item);

  printf("Enter unit price: ");
  scanf("%f", &price);

  printf("Enter purchase date (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &month, &date, &year);

  printf("Item\tUnit\tPurchase\n\tPrice\tDate\n");
  printf("%d\t$%6.2f\t%.2d/%.2d/%.4d\n", item, price, month, date, year);

  return 0;
}
