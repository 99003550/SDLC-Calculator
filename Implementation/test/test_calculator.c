#include<unity.h>

/* Modify these two lines according to the project */
#include <calculator.h>
#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
void test_multiply(void);
void test_divide(void);
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
void test_cube(void);
void setUp(){}

void tearDown(){}



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
void test_divide(void){
  
     TEST_ASSERT_EQUAL(1,divide(2,2));
    
}
void test_square(void){
    TEST_ASSERT_EQUAL(4,square(2));
    
}
void test_cube(void){
    TEST_ASSERT_EQUAL(125,cube(5));
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
    RUN_TEST(test_divide);
    RUN_TEST(test_square);
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

}










    
