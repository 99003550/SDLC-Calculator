#include<calculator.h>
#include<math.h>
#define pi 3.14

<<<<<<< HEAD
float multiply(float num1, float num2)
=======
int add(int num1,int num2)
{
    return num1+num2;
}

int sub(int num1,int num2)
{
    return num1-num2;
}
int bitwise_or(int num1, int num2)
>>>>>>> c3447acb83a998e1c12ce24d1039af07eeb64ecc
{
    return num1*num2;
}
float divide(float num1, float num2)
{
<<<<<<< HEAD
    if(num2==0)
    {
        return -1;
    }
    else
    {
        return num1/num2;
    }
=======
    return num1&num2;
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
>>>>>>> c3447acb83a998e1c12ce24d1039af07eeb64ecc
}