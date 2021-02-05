#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <calculator.h>
#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */

void test_bitwise_or(void);
void test_bitwise_and(void);
void test_log_base10(void);
void test_fabsolute(void);


/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */


  /* Add your test functions in this format for testing*/
  
  CU_add_test(suite, "bitwise_or", test_bitwise_or);
  CU_add_test(suite, "bitwise_and", test_bitwise_and);
  CU_add_test(suite, "log_base10", test_log_base10);
  CU_add_test(suite, "fabsolute", test_fabsolute);
  


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





void test_bitwise_or(void) {
  CU_ASSERT(1 == bitwise_or(1, 0));

}
void test_bitwise_and(void) {
  CU_ASSERT(0 == bitwise_and(1, 0));

}
void test_log_base10(void)
{
 CU_ASSERT(0.69 == log_base10(5)); 
}
void test_fabsolute(void)
{
 CU_ASSERT(1.5 == fabsolute(-1.5)); 
}


    