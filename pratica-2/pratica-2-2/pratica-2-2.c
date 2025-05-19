#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float gumbel(float num1, float num2, float num3)
{
    float num4 = (num1 - num2)/num3;
    return (1/num3) * exp(-1*(num4+exp(-1*num4)));
}


void main()
{   
    float x, y, z;
    
    printf("Digite três valores para o teste Gumbel:\n");
    scanf("%f %f %f", &x, &y, &z);
    printf("O resultados do teste é: \n %f"), gumbel(x, y, z);
}



