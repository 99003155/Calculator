#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <calculator.h>
#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
void test_add(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);
void test_modulus(void);
void test_square(void);
void test_cube(void);
//void test_squareroot(void);
void test_greater(void);
void test_lesser(void);
void test_equal(void);
void test_prime(void);
void test_odd(void);
void test_even(void);
void test_reverse(void);
//void test_si(void);
//void test_ci(void);
void test_profit(void);
void test_loss(void);



/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */


  /* Add your test functions in this format for testing*/
  CU_add_test(suite, "add", test_add);
  CU_add_test(suite, "subtract", test_subtract);
  CU_add_test(suite, "multiply", test_multiply);
  CU_add_test(suite, "divide", test_divide);
  CU_add_test(suite, "modulus", test_modulus);
  CU_add_test(suite, "square", test_square);
  CU_add_test(suite, "cube", test_cube);
  //CU_add_test(suite, "squareroot", test_squareroot);
  CU_add_test(suite, "greater", test_greater);
  CU_add_test(suite, "lesser", test_lesser);
  CU_add_test(suite, "equal", test_equal);
  CU_add_test(suite, "prime", test_prime);
  CU_add_test(suite, "odd", test_odd);
  CU_add_test(suite, "even", test_even);
  CU_add_test(suite, "reverse", test_reverse);
  //CU_add_test(suite, "si", test_cube);
  //CU_add_test(suite, "ci", test_cube);
  CU_add_test(suite, "profit", test_cube);
  CU_add_test(suite, "loss", test_cube);







/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);

  /* run the unit test framework*/
  CU_basic_run_tests();

  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}

/* Write all the test functions */
void test_add(void) {
  CU_ASSERT(12 == add(10, 2));

  /* Dummy fail*/
  CU_ASSERT(56 == add(10, 2));
}
void test_subtract(void) {
  CU_ASSERT(8 == subtract(10, 2));

  /* Dummy fail*/
  CU_ASSERT(56 == subtract(10, 2));
}
void test_multiply(void) {
  CU_ASSERT(20 == multiply(10, 2));

  /* Dummy fail*/
  CU_ASSERT(56 == multiply(10, 2));
}
void test_divide(void) {
  CU_ASSERT(5 == divide(10, 2));

  /* Dummy fail*/
  CU_ASSERT(56 == divide(10, 2));
}
void test_modulus(void) {
  CU_ASSERT(0 == modulus(10, 2));

  /* Dummy fail*/
  CU_ASSERT(56 == modulus(10, 2));
}
void test_square(void) {
  CU_ASSERT(4 == square(2));

  /* Dummy fail*/
  CU_ASSERT(56 == square(2));
}
void test_cube(void) {
  CU_ASSERT(8 == cube(2));

  /* Dummy fail*/
  CU_ASSERT(56 == cube(2));
}
//void test_squareroot(void) {
  //CU_ASSERT(2 == squareroot(4));

  /* Dummy fail*/
  //CU_ASSERT(56 == squareroot(4));
//}
void test_greater(void) {
  CU_ASSERT(1 == greater(10,2));

  /* Dummy fail*/
  CU_ASSERT(0 == greater(10,2));
}
void test_lesser(void) {
  CU_ASSERT(1 == lesser(2,10));

  /* Dummy fail*/
  CU_ASSERT(0 == lesser(2,10));
}
void equal(void) {
  CU_ASSERT(1 == equal(2,2));

  /* Dummy fail*/
  CU_ASSERT(0 == equal(2,2));
}
void prime(void) {
  CU_ASSERT(1 == prime(2));

  /* Dummy fail*/
  CU_ASSERT(0 == prime(2));
}
void odd(void) {
  CU_ASSERT(1 == odd(3));

  /* Dummy fail*/
  CU_ASSERT(0 == odd(3));
}
void even(void) {
  CU_ASSERT(1 == even(2));

  /* Dummy fail*/
  CU_ASSERT(0 == even(2));
}
void reverse(void) {
  CU_ASSERT(12 == reverse(21));

  /* Dummy fail*/
  CU_ASSERT(0 == reverse(21));
}
/*void si(void) {
  CU_ASSERT(6500 == si(5000,6,5));

  /* Dummy fail*/
  /*CU_ASSERT(0 == si(5000,6,5));
}
void ci(void) {
  CU_ASSERT(6,744.25 == ci(5000,6,5));

  /* Dummy fail*/
  //CU_ASSERT(0 == ci(5000,6,5));
//} 
void profit(void) {
  CU_ASSERT(1500 == profit(6500,5000));

  /* Dummy fail*/
  CU_ASSERT(0 == profit(6500,5000));
}
void loss(void) {
  CU_ASSERT(12 == loss(5000,4000));

  /* Dummy fail*/
  CU_ASSERT(0 == loss(5000,4000));
}





