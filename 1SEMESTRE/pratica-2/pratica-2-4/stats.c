#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Função de densidade de probabilidade cauchy
float cauchy(float num1)
{	
	return (1.0 / (M_PI *(1 + num1*num1)));
}

// Função de densidade de probabilidade gumbel
float gumbel(float num1, float num2, float num3)
{
    float num4 = (num1 - num2)/num3;
    return (1/num3) * exp(-1*(num4+exp(-1*num4)));
}

// Função de densidade de probabilidade laplace
float laplace(float num1, float num2, float num3)
{
    return (1/ (2*num3)) * exp((-1 * fabs(num1 - num2)/num3));
}