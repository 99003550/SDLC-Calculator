#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <calculator.h>
#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */

void test_square(void);
void test_cube(void);
void test_add(void);
void test_sub(void);
void test_multiply(void);
void test_divide(void);
void test_bitwise_or(void);
void test_bitwise_and(void);

/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */


  /* Add your test functions in this format for testing*/

  CU_add_test(suite, "square", test_square);
  CU_add_test(suite, "cube", test_cube);

  
  CU_add_test(suite, "add", test_add);
  CU_add_test(suite, "sub", test_sub);

  CU_add_test(suite, "multiply", test_multiply);
  CU_add_test(suite, "divide", test_divide);
  CU_add_test(suite, "bitwise_or", test_bitwise_or);
  CU_add_test(suite, "bitwise_and", test_bitwise_and);
  CU_add_test(suite, "multiply", test_multiply);
  CU_add_test(suite, "divide", test_divide);


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


void test_add(void){
    CU_ASSERT(0 == add(1,0));
    CU_ASSERT(2 == add(2,5));
}
void test_sub(void){
    CU_ASSERT(0 == sub(1,0));
    CU_ASSERT(2 == sub(2,5));
}

void test_multiply(void){
    CU_ASSERT(0 == multiply(1,0));
    CU_ASSERT(10 == multiply(2,5));
}
void test_divide(void){
    CU_ASSERT(0 == divide(1,0));
    CU_ASSERT(1 == divide(2,2));
}
void test_cube(void){
    CU_ASSERT(125 == cube(5));
}
void test_square(void){
    CU_ASSERT(4 == square(2));
}
void test_bitwise_or(void) {
  CU_ASSERT(1 == bitwise_or(1, 0));

}
void test_bitwise_and(void) {
  CU_ASSERT(0 == bitwise_and(1, 0));

}




    