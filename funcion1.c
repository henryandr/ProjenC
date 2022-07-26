#include "funcion1.h"

int Factorial(int Num)
{
    int Fac=1;
    for(int i=2;i<=Num;i++)
    {
        Fac *= i;
    }
    return Fac;
}