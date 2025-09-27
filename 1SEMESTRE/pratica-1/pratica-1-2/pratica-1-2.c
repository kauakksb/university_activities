#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main(void)
{
    char letra1 = 'P';
    char letra2 = 'D';
    char letra3 = 'S';
    char letra4 = '-';
    char letra5 = '1';

    int soma = (int)letra1 + (int)letra2 + (int)letra3 + (int)letra4 + (int)letra5;
    int multiplicacao = (int)letra1 * (int)letra2 * (int)letra3 * (int)letra4 * (int)letra5;
    
    printf("%d ", soma);
    printf("%d", multiplicacao);
}