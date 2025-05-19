#include <stdio.h>

unsigned long long int fatorial(int num)
{
    int i;
    unsigned long long int resultado = num;

    for (i = num-1; i > 0; i--)
    {
        resultado = resultado * i;
    }

    return resultado;
}

void main()
{
    int num;

    printf("Digite um número inteiro: ");
    scanf("%i", &num);

    printf("O fatorial de %i é: %lli", num, fatorial(num));

}
