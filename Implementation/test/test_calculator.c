/*#include<unity.h>

/* Modify these two lines according to the project */
#include <calculator.h>
#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
void test_multiply(void);
void test_multiply1(void)
void test_multiply2(void);
void test_divide(void);
void test_divide1(void);
void test_bitwise_or(void);
void test_bitwise_and(void);

void test_Xor(void);
void test_logarithemicvalue(void);


void test_log_base10(void);
void test_fabsolute(void);

void test_sin1(void);
void test_sin2(void);
void test_cos1(void);
void test_cos2(void);
void test_tan1(void);
void test_tan2(void);

void test_factorial(void);
void test_power(void);


void test_exponential(void);

void test_add(void);
void test_sub(void);

void test_square(void);
void test_square1(void);
void test_cube(void);
void test_cube1(void);
void setUp()

void tearDown()



/* Write all the test functions */


void test_add(void){
  TEST_ASSERT_EQUAL(1,add(1,0));
}
void test_sub(void){
  TEST_ASSERT_EQUAL(1,sub(1,0));
    
}
void test_multiply(void){
  TEST_ASSERT_EQUAL(10,multiply(2,5));
    
}
void test_multiply1(void){
  TEST_ASSERT_EQUAL(24,multiply(4,6));
    
}
void test_multiply2(void){
  TEST_ASSERT_EQUAL(0,multiply(4,0));
    
}
void test_divide(void){
  
     TEST_ASSERT_EQUAL(1,divide(2,2));
    
}
void test_divide1(void){
  
     TEST_ASSERT_EQUAL(3,divide(6,2));
    
}
void test_square(void){
    TEST_ASSERT_EQUAL(4,square(2));
    
}
void test_square1(void){
    TEST_ASSERT_EQUAL(9,square(3));
    
}
void test_cube(void){
    TEST_ASSERT_EQUAL(125,cube(5));
}
void test_cube1(void){
    TEST_ASSERT_EQUAL(216,cube(6));
}
void test_sin1(void)
{
  TEST_ASSERT_EQUAL(0,sin1(0));
}
void test_sin2(void)
{
  TEST_ASSERT_EQUAL(1,sin2(90));
}
void test_cos1(void)
{  
  TEST_ASSERT_EQUAL(1,cos1(0));
}
void test_cos2(void)
{  
  TEST_ASSERT_EQUAL(0,cos2(90));
}
void test_tan1(void)
{
  TEST_ASSERT_EQUAL(1,tan1(45));
 
}
void test_tan2(void)
{
  TEST_ASSERT_EQUAL(0,tan2(0));
 
}
void test_factorial(void)
{
  TEST_ASSERT_EQUAL(6,factorial(3));
}

void test_power(void) 
{
  TEST_ASSERT_EQUAL(1,pow(2,0));
  
}
void test_bitwise_or(void) {
  TEST_ASSERT_EQUAL(1,bitwise_or(1, 0));
 

}
void test_bitwise_and(void) {
   TEST_ASSERT_EQUAL(0,bitwise_and(1, 0));
 
}

void test_xor(void){
TEST_ASSERT_EQUAL(1,Xor(1,0));
  
}
void test_logarithemicvalue(void){
  TEST_ASSERT_EQUAL(1.609,logarithemicvalue(5));
  
}
void test_exponential(void)
{
 TEST_ASSERT_EQUAL(8.166170 ,exponential(2.100000));
   
   
}
void test_log_base10(void)
{
  TEST_ASSERT_EQUAL(0.69 ,log_base10(5));
}
 
void test_fabsolute(void)
{
  TEST_ASSERT_EQUAL(1.5  ,fabsolute(-1.5));


}

int main(){
    UNITY_BEGIN();
     RUN_TEST(test_add);
    RUN_TEST(test_sub);
    RUN_TEST(test_multiply);
    RUN_TEST(test_multiply1);
    RUN_TEST(test_multiply2);
    RUN_TEST(test_divide);
    RUN_TEST(test_divide1);
    RUN_TEST(test_square);
    RUN_TEST(test_square1);
    RUN_TEST(test_cube);
    RUN_TEST(test_cube1);
     RUN_TEST(test_sin1);
     RUN_TEST(test_cos1);
     RUN_TEST(test_tan1);
     RUN_TEST(test_sin2);
     RUN_TEST(test_cos2);
     RUN_TEST(test_tan2);
     RUN_TEST(test_factorial);
     RUN_TEST(test_power);
     RUN_TEST(test_bitwise_or);
     RUN_TEST(test_bitwise_and);
     RUN_TEST(test_xor);
     RUN_TEST(test_logarithemicvalue);
     RUN_TEST(test_exponential);
    // RUN_TEST(test_log_base10);
     
     RUN_TEST(test_fabsolute);
     
         
     return UNITY_END();

}*/
  #include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <calculator.h>
#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
void test_square(void);
void test_cube(void);
void test_sum(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);
void test_factorial(void);
void test_squareroot(void);
void test_sine(void);
void test_cosine(void);
void test_tan_func(void);
void test_bitwise_or(void);
void test_bitwise_and(void);
void test_xor(void);
void test_logarithmicvalue(void);
void test_log_base10(void);
void test_asine(void);
void test_acosine(void);
void test_atan_value(void);
void test_atan2value(void);
void test_tanhvalue(void);
void test_sinhvalue(void);
void test_coshvalue(void);
void test_exponent(void);
void test_sum_upto_n(void);
void test_ceilvalue(void);
void test_floor_func(void);
void test_fabsvalue(void);
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
  CU_add_test(suite, "sum",test_sum);
  CU_add_test(suite, "subtract",test_subtract);
  CU_add_test(suite, "multiply", test_multiply);
  CU_add_test(suite, "divide", test_divide);
  CU_add_test(suite, "factorial", test_factorial);
  CU_add_test(suite, "squareroot", test_squareroot);
  CU_add_test(suite, "sine", test_sine);
  CU_add_test(suite, "cosine", test_cosine);
  CU_add_test(suite, "tan_func", test_tan_func);
  CU_add_test(suite, "bitwise_or", test_bitwise_or);
  CU_add_test(suite, "bitwise_and", test_bitwise_and);
  CU_add_test(suite, "xor", test_xor);
  CU_add_test(suite, "log_base10", test_log_base10);
  CU_add_test(suite, "asine", test_asine);
  CU_add_test(suite, "acosine", test_acosine);
  CU_add_test(suite, "atan_value", test_atan_value);
  CU_add_test(suite, "atan2value", test_atan2value);
  CU_add_test(suite, "tanhvalue", test_tanhvalue);
  CU_add_test(suite, "sinhvalue", test_sinhvalue);
  CU_add_test(suite, "coshvalue", test_coshvalue);
  CU_add_test(suite, "exponent", test_exponent);
  CU_add_test(suite, "sum_upto_n", test_sum_upto_n);
  CU_add_test(suite, "ceilvalue", test_ceilvalue);
  CU_add_test(suite, "floor_func", test_floor_func);
  CU_add_test(suite, "fabsvalue", test_fabsvalue);


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
void test_sum(void) {
  CU_ASSERT(30 == sum(10, 20));

  /* Dummy fail*/
  CU_ASSERT(1500 == sum(750, 7500));
}

void test_subtract(void) {
  CU_ASSERT(2 == subtract(7, 5));

  CU_ASSERT(1 == subtract(1000, 900));
}

void test_multiply(void) {
  CU_ASSERT(0 == multiply(1, 0));

  /* Dummy fail*/
  CU_ASSERT(2 == multiply(2, 5));
}
void test_divide(void) {
  CU_ASSERT(0 == divide(1, 0));

  /* Dummy fail*/
  CU_ASSERT(3 == divide(2, 2));
}

void test_cube(void)
{
  CU_ASSERT(125== cube(5));
}

void test_square(void)
{
  CU_ASSERT(4 == square(2));
}
void test_factorial(void)
{
  CU_ASSERT(6 == factorial(3));
}
void test_squareroot(void) {
  CU_ASSERT(5 == squareroot(25));
}
void test_sine(void) {
  CU_ASSERT(0 == sine(0));
}
void test_cosine(void) {
  CU_ASSERT(1 == cosine(0));
}
void test_tan_func(void) {
  CU_ASSERT(1 == tan_func(45));
}
void test_bitwise_or(void) {
  CU_ASSERT(1 == bitwise_or(1, 0));

}
void test_bitwise_and(void) {
  CU_ASSERT(0 == bitwise_and(1, 0));

}
void test_xor(void){
CU_ASSERT(1 == xor(1, 0));
}
void test_logarithmicvalue(void)
{
CU_ASSERT(1.609 == logarithmicvalue(5));
}
void test_log_base10(void){
CU_ASSERT(0.69 == log_base10(5));}
void test_asine(void)
{
CU_ASSERT(-0.52 == asine(-0.50));
}
void test_acosine(void)
{
CU_ASSERT(2.09 == acosine(-0.50));
}
void test_atan_value(void)
{
CU_ASSERT(0.79 == atan(45));
}
void test_tanhvalue(void){
CU_ASSERT(0.38 == tanhvalue(0.40));}
void test_sinhvalue(void)
{
CU_ASSERT(6.05 == sinhvalue(2.50));
}
void test_coshvalue(void)
{
CU_ASSERT(1.12 == coshvalue(0.50));
}
void test_sum_upto_n(void){
CU_ASSERT(15 == sum_upto_n(5));}
void test_ceilvalue(void)
{
CU_ASSERT(9 == ceilvalue(8.33));}
void test_floor_func(void)
{
CU_ASSERT(1== floor_func(1.6));}
void test_fabsvalue(void)
{
CU_ASSERT(1.5 == fabsvalue(-1.5));
}
void test_atan2value(void){
  CU_ASSERT(2.35== atan2value(-0.5,0.5));
}
void test_exponent(void){
  CU_ASSERT(8.166170== exponent(2.100000));
}










    
