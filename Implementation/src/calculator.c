#include<calculator.h>
#include<math.h>
#define pi 3.14

float multiply(float num1, float num2)
{
    return num1*num2;
}
float divide(float num1, float num2)
{
    if(num2==0)
    {
        return -1;
    }
    else
    {
        return num1/num2;
    }
}