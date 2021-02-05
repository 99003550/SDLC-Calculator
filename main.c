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
  
  q[0] = add;
  q[1] = sub;
  q[2] = multiply;
  q[3] = divide;
  q[4] = square;
  q[5] = cube;
  q[6] = sin;
  q[7] = cos;
  q[8] = tan;
  q[9] = factorial;
  q[10] = power;
  q[11] = bitwise_or;
  q[12] = bitwise_and;
  q[13] = Xor;
  q[14] = logarithemicvalue;
  q[15] = exponential;
  q[16] = log_base10;
  q[17] = fabsolute;
  


  printf("0:add;1:sub;2:multiply;3:divide;4:square;5:cube;6:sin;7:cos;8:tan;9:factorial;10:power/n;11:bitwise_or;12:bitwise_and;13:Xor;14:logarithemicvalue;15:exponential;16:log_base10;17:fabsolute\n");
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