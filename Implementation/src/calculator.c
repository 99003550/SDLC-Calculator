#include "calculator.h"
#include<math.h>
#define pi 3.14


int add(int num1,int num2)
{
    return num1+num2;
}

int sub(int num1,int num2)
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


int bitwise_or(int num1, int num2)
{
    return num1*num2;
}


float multiply(float num1, float num2)
{
    return num1*num2;
}

float divide(float num1, float num2)
{

    {
        return -1;
    }
    else
    {
        return num1/num2;
    }
    return num1&num2;
}


int Xor(int num1, int num2)
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



int bitwise_or(int num1, int num2)
{
    return num1|num2;
}


int bitwise_and(int num1, int num2)
{
    return num1&num2;
}