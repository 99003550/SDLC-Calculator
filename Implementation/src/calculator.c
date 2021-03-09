/*#include "calculator.h"
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
int bitwise_or(int bit_num1, int bit_num2)


{
    return bit_num1|bit_num2;
}

int bitwise_and(int bit_num1, int bit_num2)


{
    return bit_num1&bit_num2;
}
int Xor(int bit_num1, int bit_num2)
{
    return bit_num1^bit_num2;
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
//float factorial(float num1){

//}

float logarithemicvalue(float num1)
{
    return log(num1);
}
float exponent(float num1)
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
 }*/
#ifndef CALCULATOR_H_INCLUDED
#define CALCULATOR_H_INCLUDED
#ifndef __CALCULATOR_H__
#define __CALCULATOR_H__


#include <stdio.h>
#include <stdlib.h>
#include <math.h>




	/**
	* Calculates the sum of two integer numbers
	* @param[in] number1 first integer
	* @param[in] number2 second integer
	* @return Square of number1
	* @return cube of number1 & number2
	* @return Sum of number1 & number2
	* @return difference of number1 & number2
	* @return product of number1 & number2
	* @return division of number1 & number2
	* @return factorial of number1
	* @return power of number1 & number2
	* @return square_root of number1
	* @return Sine of number1
	* @return cosine of number1
	* @return tan of number1
	* @return bitwise_or of number1 & number2
        * @return bitwise_and of number1 & number2
        * @return xor of number1 & number2
        * @return logarithmic value of number1
        * @return log base 10 value of number1
        * @return asine of number1
        * @return acosine of number1
        * @return atan of number1
        * @return atan2 of number1
        * @return tanh of number1
        * @return sinh of number1
        * @return cosh of number1
        * @return exponent of number1
        * @return sum upto n of number1
        * @return ceil value of number1
        * @return floor value of number1
        * @return absolute value of number1
	* @note Any note for the function
	*/
	float square(float num1);
	float cube(float num1);
	    float sum(float num1, float num2);
	    float subtract(float num1, float num2);
	    float multiply(float num1, float num2);
	    float divide(float num1, float num2);
	    float factorial(float num1);
	    float power(float num1, float num2);
	    float squareroot(float num1);
	    float sine(float num1);
	    float cosine(float num1);
	    float tan_func(float num1);
	    int bitwise_or(int num1, int num2);
	    int bitwise_and(int num1, int num2);
	    int xor(int num1, int num2);
	    float logarithmicvalue(float num1);
	    float log_base10(float num1);
	    float asine(float num1);
	    float acosine(float num1);
	    float atan_value(float num1);
	    float atan2value(float y, float x);
	    float tanhvalue(float num1);
	    float sinhvalue(float num1);
	    float coshvalue(float num1);
	    float exponent(float num1);
	    float sum_upto_n(float num1);
	    float ceilvalue(float num1);
	    float floor_func(float num1);
	    float fabsvalue(float num1);
	#endif
#endif


