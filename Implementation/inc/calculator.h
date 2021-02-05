#ifndef CALCULATOR_H_INCLUDED
#define CALCULATOR_H_INCLUDED
#ifndef __CALCULATOR_H__
#define __CALCULATOR_H__

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float add(float num1,float num2);
float sub(float num1,float num2);
float multiply(float num1,float num2);
float divide(float num1,float num2);
float square(float num1);
float cube(float num1);

float sin(float num1);
float cos(float num1);
float tan(float num1);
float factorial(float num1);
float power(float num1, float num2);

int bitwise_or(int num1, int num2);
int bitwise_and(int num1, int num2);
float Xor(float num1 float num2);
float logarithemicvalue(float num1);

double exponential(double num1);

float log_base10(float num1);
float fabsolute(float num1);





#endif
#endif