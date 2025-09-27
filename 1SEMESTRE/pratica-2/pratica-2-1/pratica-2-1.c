#include <stdio.h>
#include <math.h>

float cauchy(float a)
{	
	return (1.0 / (M_PI * (1 + a*a)));
}


void main(){
	float x, y, z;
	printf("Digite os valores para o teste cauchy:");
	scanf("%f %f &f",&x, &y, &z);
	printf("O resultado é: %6f \n",cauchy(x));
	printf("O resultado é: %6f \n",cauchy(y));
	printf("O resultado é: %6f \n",cauchy(z));
	}
