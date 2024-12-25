#include "../src/calculator.h"
#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

void test_add() {
  CU_ASSERT(add(2, 3) == 5);
  CU_ASSERT(add(-1, 1) == 0);
}

void test_subtract() {
  CU_ASSERT(sub(5, 3) == 2);
  CU_ASSERT(sub(0, 5) == -5);
}

void test_multiply() {
  CU_ASSERT(mul(3, 4) == 12);
  CU_ASSERT(mul(0, 5) == 0);
}

void test_divide() { CU_ASSERT(div(6, 3) == 2); }

int main() {
  if (CUE_SUCCESS != CU_initialize_registry()) {
    return CU_get_error();
  }

  CU_pSuite suite = CU_add_suite("Calculator Tests", 0, 0);
  if (NULL == suite) {
    CU_cleanup_registry();
    return CU_get_error();
  }

  if ((NULL == CU_add_test(suite, "test_add", test_add)) ||
      (NULL == CU_add_test(suite, "test_subtract", test_subtract)) ||
      (NULL == CU_add_test(suite, "test_multiply", test_multiply)) ||
      (NULL == CU_add_test(suite, "test_divide", test_divide))) {
    CU_cleanup_registry();
    return CU_get_error();
  }

  CU_basic_set_mode(CU_BRM_VERBOSE);
  CU_basic_run_tests();

  CU_cleanup_registry();
  return CU_get_error();
}
