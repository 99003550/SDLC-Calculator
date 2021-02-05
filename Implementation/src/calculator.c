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
int bitwise_or(int num1, int num2)
{
    return num1|num2;
}

int bitwise_and(int num1, int num2)
{
    return num1&num2;
}
float sin(float num1)
{ 
    return sin(num1);
}
float cos(float num1)
{
    return cos(num1);
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