#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <calculator.h>
#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
void test_multiply(void);
void test_divide(void);
void test_bitwise_or(void);
void test_bitwise_and(void);
void test_sin(void);
void test_cos(void);
void test_tan(void);

/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */


  /* Add your test functions in this format for testing*/
  
  CU_add_test(suite, "multiply", test_multiply);
  CU_add_test(suite, "divide", test_divide);
  CU_add_test(suite, "bitwise_or", test_bitwise_or);
  CU_add_test(suite, "bitwise_and", test_bitwise_and);
  CU_add_test(suite, "multiply", test_multiply);
  CU_add_test(suite, "divide", test_divide);
  CU_add_test(suite, "sin", test_sin);
  CU_add_test(suite, "cos", test_cos);
  CU_add_test(suite, "tan", test_tan);


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


void test_multiply(void){
    CU_ASSERT(0 == multiply(1,0));
    CU_ASSERT(2 == multiply(2,5));
}
void test_divide(void){
    CU_ASSERT(0 == divide(1,0));
    CU_ASSERT(3 == divide(2,2));
}

void test_bitwise_or(void) {
  CU_ASSERT(1 == bitwise_or(1, 0));

}
void test_bitwise_and(void) {
  CU_ASSERT(0 == bitwise_and(1, 0));

}
void test_sin(void)
{
  CU_ASSERT(0 == sin(0));
}
void test_cos(void)
{ 
  CU_ASSERT(1 == cos(0));
}
void test_tan(void)
{
  CU_ASSERT(1 == tan(45));
}




    