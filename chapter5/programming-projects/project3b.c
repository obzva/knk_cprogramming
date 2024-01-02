/* Modified version of broker.c of section5.2
 * Ask the user to enter the number of shares and the price per share,
 * instead of the value of the trade
 * Display the rival's commission as well as the commission charged by the original broker.
 * */

#include <stdio.h>

int main(void)
{
  int share;
  float price, commission, value, rival_commission = 33.00f;

  printf("Enter the number of shares: ");
  scanf("%d", &share);

  printf("Enter the price per share: ");
  scanf("%f", &price);

  value = share * price;

  if (value < 2500.00f) {
    commission = 30.00f + .017f * value;
  } else if (value < 6250.00f) {
    commission = 56.00f + .0066f * value;
  } else if (value < 20000.00f) {
    commission = 76.00f + .0034f * value;
  } else if (value < 50000.00f) {
    commission = 100.00f + .0022f * value;
  } else if (value < 500000.00f) {
    commission = 155.00f + .0011f * value;
  } else {
    commission = 255.00f + .0009f * value;
  }

  if (commission < 39.00f) {
    commission = 39.00f;
  }

  if (share < 2000) {
    rival_commission = rival_commission + 0.03f * share;
  } else {
    rival_commission = rival_commission + 0.02f * share;
  }

  printf("Commission:         $%.2f\n", commission);
  printf("Rival's commission: $%.2f\n", rival_commission); 

  return 0;
}
