#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float laplace(float num1, float num2, float num3)
{
    return (1/ (2*num3)) * exp((-1 * fabs(num1 - num2)/num3));
}

void main()
{   
    float x, y, z;
    
    printf("Digite três valores para o teste de Laplace:\n");
    scanf("%f %f %f", &x, &y, &z);
    printf("O resultados do teste é: \n %f"), laplace(x, y, z);
}