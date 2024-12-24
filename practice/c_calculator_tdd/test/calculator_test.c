#include "../src/calculator.h"
#include <assert.h>
#include <stdio.h>

void test_add() {
  assert(add(2, 3) == 5);
  assert(add(-1, 1) == 0);
  printf("All addition tests passed.\n");
}

void test_subtract() {
  assert(sub(5, 3) == 2);
  assert(sub(0, 5) == -5);
  printf("All subtraction tests passed.\n");
}

void test_multiply() {
  assert(mul(3, 4) == 12);
  assert(mul(0, 5) == 0);
  printf("All multiplication tests passed.\n");
}

void test_divide() {
  assert(div(6, 3) == 2);
  printf("All division tests passed.\n");
}

int main() {
  test_add();
  test_subtract();
  test_multiply();
  test_divide();
  return 0;
}
