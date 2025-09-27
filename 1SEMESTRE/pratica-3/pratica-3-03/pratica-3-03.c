#include <stdio.h>

void troca(float *end_valor1, float *end_valor2)
{
	float num1 = *end_valor1;
	float num2 = *end_valor2;
	*end_valor1 = num2;
	*end_valor2 = num1;
}
