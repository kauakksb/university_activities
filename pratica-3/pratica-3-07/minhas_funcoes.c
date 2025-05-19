#include <stdio.h>

// Função que soma 1 ao número inserido
void soma1(int *num)
{
    int soma;
    *num = *num + 1;
}

// Função que troca os valores de duas variáveis através dos seus ponteiros
void troca(float *end_valor1, float *end_valor2)
{
	float trocador = *end_valor1;
	*end_valor1 = *end_valor2;
	*end_valor2 = trocador;
}

// Função que retorna apenas o número do DDD de um telefone
int ddd(long long int tel)
{
   int div = tel/1000000000;
   return div;
}
