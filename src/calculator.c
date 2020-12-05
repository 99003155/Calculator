#include <calculator.h>

int add(int operand1, int operand2)
{
    return operand1 + operand2;
}

int subtract(int operand1, int operand2)
{
    return operand1 - operand2;
}

int multiply(int operand1, int operand2)
{
    return operand1 * operand2;
}

int divide(int operand1, int operand2)
{
    if(0 == operand2)
        return 0;
    else
        return operand1 / operand2;
}

int modulus(int operand1, int operand2)
{
    return operand1 % operand2;
}
int square(int operand1)
{
    return operand1 * operand1;
}
int cube(int operand1)
{
    return operand1 * operand1 * operand1;
}
/*int squareroot(int operand1)
{
    int number;
    int srt = number / 2;
    int temp = 0;

    while(srt != temp){
        
        temp = srt;

        srt = ( number/temp + temp) / 2;
    return srt;
}*/
int greater(int operand1, int operand2)
{
    if(operand1>operand2)
        return operand1;
    else
        return operand2;
}
int lesser(int operand1, int operand2)
{
    if(operand1<operand2)
        return operand1;
    else
        return operand2;
}
/*int equal(int operand1, int operand2)
{
    if(operand1=operand2)
        return operand1;
    else
        return operand2;
}*/
int prime(int operand1)
{
    int i,a=0,flag=0;

    a=operand1/2;
    for(i=2;i<=a;i++)
    {
    if(operand1%i==0)
    {
    return 0;
    flag=1;
    break;
    }
    }
    if(flag==0)
    return 1;
}
int odd(int operand1)
{
    if(operand1%2!=0)
        return 1;
    else
        return 0;
}
int even(int operand1)
{
    if(operand1%2==0)
        return 1;
    else
        return 0;
}
int reverse(int operand1)
{
    int rev=0,remainder;
    while(operand1!=0){
        remainder = operand1%10;
        rev = rev*10+remainder;
        operand1 /= 10;
    }
    return rev;
}
/*int si(int operand1, int operand2, int operand3)
{
    si = ( operand1* operand2 * operand3) / 100;
    return si;

}
int ci(int operand1, int operand2, int operand3)
{
    ci=operand1*pow((1+operand2/100),operand3);

    return ci;
}*/
int profit(int operand1, int operand2)
{
    return operand1 - operand2;
}
int loss(int operand1, int operand2)
{
    return operand1 - operand2;
}
