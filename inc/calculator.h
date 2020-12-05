#ifndef CALCULATOR_H_INCLUDED
#define CALCULATOR_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include<math.h>

int add(int operand1, int operand2);
int subtract(int operand1, int operand2);
int multiply(int operand1, int operand2);
int divide(int operand1, int operand2);
int modulus(int operand1, int operand2);
int square(int operand1);
int cube(int operand1);
//int squareroot(int operand1);
int greater(int operand1, int operand2);
int lesser(int operand1, int operand2);
int equal(int operand1, int operand2);
int prime(int operand1);
int odd(int operand1);
int even(int operand1);
int reverse(int operand1);
//int si(int operand1, int operand2, int operand3);
//int ci(int operand1,int operand2, int operand3);
int profit(int operand1, int operand2);
int loss(int operand1, int operand2);


#endif
