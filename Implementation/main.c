#include <stdio.h>
#include <stdlib.h>
#include <calculator.h>

float (*q[18])(float x);
int main(void)
{
  float result;
  int op;
  float num1,num2;
  
  q[0] = add;
  q[1] = sub;
  q[2] = multiply;
  q[3] = divide;
  q[4] = power;
  q[5] = bitwise_or;
  q[6] = bitwise_and;
  q[7] = Xor;
  q[8] = square;
  q[9] = cube;
  q[10] = sin1;
  q[11] = cos1;
  q[12] = tan1;
  q[13] = factorial;
  q[14] = logarithemicvalue;
  q[15] = exponential;
  q[16] = log_base10;
  q[17] = fabsolute;
  
  printf("0:add;1:sub;2:multiply;3:divide;4:power;5:bitwise_or;6:bitwise_and;7:Xor;8:square;9:cube;10:sin/n;11:cos;12:tan;13:factorial;14:logarithemicvalue;15:exponential;16:log_base10;17:fabsolute\n");
  do {
    printf("Enter number of operation: ");
    scanf("%d", &op);
  } while(op<0 || op>18);

  if (op >7 && op< 17){
    printf("enter the number: ");
    scanf("%f", &num1);
    result = (*q[op])(num1);
    printf("result: %f", result);
  }
  if (op>-1 && op<7)
  {
      printf("Enter numbers: ");
      scanf("%f %f", &num1, &num2);
      result = (*(q[op])(num1, num2));
      printf("result : %f", result);

  }


  //test_main();

  return 0;
}
