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
float square(int num1)
{
    return num1*num1;
}
float cube(int num1)
{
    float result;
    result=pow(num1,3);
    return result;

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