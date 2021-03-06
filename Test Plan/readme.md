**LOW LEVEL TEST PLANS IN CALCULATOR**


| ID   | DESCRIPTION                                                         | EXPECTED INPUT      | EXPECTED OUTPUT |
|------|---------------------------------------------------------------------|---------------------|-----------------|
| TP1  | To add two float numbers and  display the result on calculator      | 2+2 ,10+20,  3+5, -2+4, 4+(-2), (-2)+(-4)           | 4 , 30 , 8 , 2 ,  2, -6            |
| TP2  | To subtract two float numbers and  display the result on calculator | 5-2  ,20-10, 4-(-1)               | 3 ,10,  5              |
| TP3  | To multiply two float numbers and  display the result on calculator | 2*3, 5*2, 5*(-2)             | 6,  10,  -10            |
| TP4  | To divide two float numbers and  display the result on calculator   | 50/2 ,1/0               | 25, invalid              |
| TP5  | To find square root of a number                                     | Square root(16)     | 4               |
| TP6  | To find cube root of a number                                       | Cube root(27)       | 3               |
| TP7  | To find factorial of a number                                       | Fact(5) Fact(-5)             | 120, invalid input             |
| TP8  | To find power of a number                                           | Power of2^3, -2^3, 2^-3          | 8,  -8,  0.125            |
| TP9  | To find bitwise-and of a number                                     | 12&25, -1&0               | 8(Binary), 0      |
| TP10 | To find bitwise-or of a number                                      | 12\|25, -1\|0             | 29(Binary) ,-1     |
| TP11 | To find bitwise-xor of a number                                     | 12^25               | 21(Binary)      |
| TP12 | To find log of a number                                             | Log(10)             | 1               |
| TP13 | To find log base_10 of a number                                     | Log base 10 of (11) | 1.041           |
| TP14 | To find abs of a number                                             | Abs(10)             | 10              |
| TP15 | To find exponential of a number                                     | Exp of (2), Exp of (-2)        | 7.389, 0.135335           |
| TP16 | To find sin of a number                                            | Sin(90)             | 1                |
| TP17 | To find cos of a number                                          | Cos(90)             | 0                  |
| TP18 | To find tan of a number                                         | Tan(45)             | 1                   |
| TP19 | To find floor of a number                                       | floor(5.4)          | 5.0000              |
| TP20 | To find Ceil of a number                                        | Ceil(number)        |                     |


**High Level Test Plan**

 
|Test ID   |Description   |Input   |Expected Output   |
|---|---|---|---|
|HL_01   |Include buttons with number 0-9 and all the function buttons   |X= 0-9   |C= 01234567890   |
|HL_02   |Logarithm should be signed function   |A= -23   |Error   |
|HL_03   |Overflow will stop the process   |A= 10^12   |Stack Error   |


**NORMAL TEST PLANS IN CALCULATOR**

1.  if the calculator is a normal calculator or a scientific calculator.
2. Verify that all the buttons are present and text written on them is readable.
3.  the arithmetic operations are working fine- +, -, /, \* etc.

4. Verify that the calculator gives the correct result in case of operations containing decimal numbers.
5.  if the calculator is battery operated or works on solar power.
6. Verify the outer body material of the calculator.
7. Verify the spacing between the two buttons, the buttons should not be too closely placed.
8.  the pressure required to press a button, the pressure required should not be too high.
9. Verify the number of digits allowed to enter in the calculator for any operation.
10. Verify the working of the ON-OFF button in the calculator.
11.  if keeping the calculator unused for a certain period of time, turns it off automatically.
12. Verify the state of the calculator when two buttons are pressed simultaneously.
13. Verify if the user can delete digits one by one using the backspace key.
