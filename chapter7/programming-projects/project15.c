#include <stdio.h>

int main(void)
{
  int n;

  short short_res = 1; // max 7
  int int_res = 1; // max 12 
  long int long_res = 1; // max 20
  long long int long_long_res = 1; // max 20, `long int` and `long long int` have same size in my pc
  float float_res = 1.0f; // max 13
  double double_res = 1; // max 22
  long double long_double_res = 1.0L; // max 22, `double` and `long double` have same size in my pc

  printf("Enter a positive integer: ");
  scanf("%d", &n);
  
  for (int i = 1; i <= n; i++) {
    short_res *= i;
    int_res *= i;
    long_res *= i;
    long_long_res *= i;
    float_res *= i;
    double_res *= i;
    long_double_res *= i;
  }

  printf("Factorial of %d:\n", n);
  printf("  short_res      : %hd\n", short_res);
  printf("  int_res        : %d\n", int_res);
  printf("  long_res       : %ld\n", long_res);
  printf("  long_long_res  : %lld\n", long_long_res);
  printf("  float_res      : %.0f\n", float_res);
  printf("  double_res     : %.0f\n", double_res);
  printf("  long_double_res: %.0Lf\n", long_double_res);

  return 0;
}
