#include "calculator.h"
#include<math.h>
#define pi 3.14



float add(float num1,float num2)

{
    return num1+num2;
}


float sub(float num1,float num2)
{
    return num1-num2;
}


float square(float num1)
{
    return (num1*num1);
}

float cube(float num1)
{
    float result;
    result=pow(num1,3);
    return result;
}


float multiply(float num1, float num2)

{
    return num1&num2;
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

    return num1&num2;
}
int bitwise_or(int num1, int num2)


{
    return num1|num2;
}

int bitwise_and(int num1, int num2)


{
    return num1*num2;
}


float Xor(int num1, int num2)
{
    return num1^num2;
}


float logarithemicvalue(float num1)
{
    return log(num1);
}


float log_base10(float num1)
{
    return num1*num1;
}


float factorial(float num1)
{
    if (num1 == 0)
        {
        return 1;
       }
    else
    {
     return num1*factorial(num1-1);
    }
}



double exponential( double num1)
{
    return exp(num1);
}