
#include <stdio.h>
#include <stdlib.h>
#include "calculator.h"


float (*p[9]) (float x,float y);
float (*q[18])(float x);
int (*bit_funcs[3])(int x, int y);
int main(void)
{
  float result;
  int op;
  int bit_result;
  float num1,num2;
  int bit_num1, bit_num2;
  bit_funcs[0] = bitwise_or;
  bit_funcs[1] = bitwise_and;
  bit_funcs[2] = xor;
  q[0] = square;
  q[1] = cube;
  q[2] = factorial;
  q[3] = squareroot;
  q[4] = sine;
  q[5] = cosine;
  q[6] = tan_func;
  q[7] = asine;
  q[8] = acosine;
  q[9] = atan_value;
  q[10] = tanhvalue;
  q[11] = sinhvalue;
  q[12] = coshvalue;
  q[13] = exponent;
  q[14] = sum_upto_n;
  q[15] = ceilvalue;
  q[16] = floor_func;
  q[17] = fabsvalue;
  q[18] = logarithmicvalue;
  q[19] = log_base10;
  q[20] = atan2value;

  p[0] = sum;
  p[1] = subtract;
  p[2] = multiply;
  p[3] = divide;
  p[4] = power;



  printf("0:square\n1:cube\n2:factorial\n3:squareroot\n4:sine\n5:cosine\n6:tan_func\n7:asine\n8:acosine\n9:atan_value\n10:tanhvalue\n11:sinhvalue\n12:coshvalue\n13:exponent\n14:sum_upto_n\n15:ceilvalue\n16:floor_func\n17:fabsvalue\n18:logarithmicvalue\n19:log_base10\n20:atan2value\n21:sum\n22:subtract\n23:multiply\n24:divide\n25:power\n26:bit_or\n27:bit_and\n28:bit_xor\n");
  do {
    printf("Enter number of operation: ");
    scanf("%d", &op);
  } while(op<0 || op>29);

  if (op >-1 && op< 21){
    printf("enter the number: ");
    scanf("%f", &num1);
    result = (*q[op])(num1);
    printf("result: %f", result);
  }
  if (op>20 && op<26)
  {
      printf("Enter numbers: ");
      scanf("%f %f", &num1, &num2);
      result = (*p[op -21])(num1, num2);
      printf("result : %f", result);

  }
  if (op>25 && op<29){
    printf("Enter bit_num1 and bitnum2: ");
    scanf("%d %d", &bit_num1, &bit_num2);
    bit_result = (*bit_funcs[op-26])(bit_num1, bit_num2);
    printf("result: %d", bit_result);
  }


  //test_main();

  return 0;
}






