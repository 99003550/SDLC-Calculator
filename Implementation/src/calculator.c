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


float multiply(float num1, float num2)

{
    return num1*num2;
}


float divide(float num1, float num2)
{

    if(num2 == 0)


    {
        return -1;
    }
    else
    {
        return num1/num2;
    }
float power(float num1, float num2)
{
    if(num2==0)
    {
        return 1;
    }
    else
        {
       return pow(num1, num2);
    }
}
int bitwise_or(int num1, int num2)


{
    return num1|num2;
}

int bitwise_and(int num1, int num2)


{
    return num1&num2;
}
float Xor(int num1, int num2)
{
    return num1^num2;
}
    

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

float sin1(float num1)
{
    return sin(num1);
}
float cos1(float num1)
{
    return cos(num1);
}
float tan1(float num1)
{
    if(num1==pi/2)
    {
        return -1;
    }
    else
    {
        return tan(num1);
    }
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

float logarithemicvalue(float num1)
{
    return log(num1);
}
double exponent(double num1)
{

    return exp(num1);
}


float log_base10(float num1)
{
    return log10(num1);
}
 
 float fabsolute(float num1)
 {
     return fabs(num1);
 }


