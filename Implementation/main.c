#include <stdio.h>
#include <stdlib.h>
#include <calculator.h>
float (*p[10])(float x);
float (q[5])(float *x,float *y);
int (*bit_funcs[3])(int x,int y);

int main(void)
{
  float result;
  int op;
  int
  float num1,num2;
  int bit_result;
  int bit_num1,bit_num2;
  q[0] = add;
  q[1] = sub;
  q[2] = multiply;
  q[3] = divide;
  q[4] = power;
  bit_funcs[0] = bitwise_or;
  bit_funcs[1] = bitwise_and;
  bit_funcs[2] = Xor;
  p[0] = square;
  p[1] = cube;
  p[2] = sin1;
  p[3] = cos1;
  p[4] = tan1;
  p[5] = factorial;
  p[6] = logarithemicvalue;
  p[7] = exponential;
  p[8] = log_base10;
  p[9] = fabsolute;
  
  printf("0:square;1:cube;2:sin;3:cos;4:tan;5:factorial;6:logarithemicvalue;7:exponential;8:log_base10;9:fabsolute;10:add/n;11:sub;12:multiply;13:divide;14:power;15:bitwise_or;16:bitwise_and;17:xor\n");
  do {
    printf("Enter number of operation: ");
    scanf("%d", &op);
  } while(op<0 || op>18);

  if (op >-1 && op< 10){
    printf("enter the number: ");
    scanf("%f", &num1);
    result = (*p[op])(num1);
    printf("result: %f", result);
  }
  if (op>9 && op<16)
  {
      printf("Enter numbers: ");
      scanf("%f %f", &num1, &num2);
      result = (q[op-10](&num1 ,&num2));
      printf("result: %f", result);
    }
      if(op>15 && op<19)
      {
        printf("Enter bit_num1 and bit_num2: ");
      scanf("%d %d", &bit_num1, &bit_num2);
        bit_result=(*bit_funcs[op-16])(bit_num1,bit_num2);
       printf("result : %d", bit_result);

      }
    
  //test_main();

  return 0;
}




