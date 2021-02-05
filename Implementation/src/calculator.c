#include<calculator.h>
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

int logarithemicvalue(float num1)
{
    return log(num1);
}

float log_base10(float num1)
{
    return log10(num1);
}

float fabsolute(float num1)
{
    return fabs(num1);
}

float sin(float num1)
{ 
    return sin(num1);
}

float cos(float num1)
{
    return cos(num1);

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




}
float tan(float num1)
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

