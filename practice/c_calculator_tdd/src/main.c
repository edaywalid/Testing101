#include "calculator.h"
#include <stdio.h>

int main() {
  int x, y;
  printf("Enter two numbers: ");
  scanf("%d %d", &x, &y);
  printf("Sum of %d and %d is %d\n", x, y, add(x, y));
  printf("Difference of %d and %d is %d\n", x, y, sub(x, y));
  printf("Product of %d and %d is %d\n", x, y, mul(x, y));
  printf("Quotient of %d and %d is %d\n", x, y, div(x, y));
  return 0;
}
