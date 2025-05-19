#include <stdio.h>

unsigned int soma1SePar(unsigned int number)
{
    return number + ((number+1) & 1);
}

void main()
{
    unsigned int num;
    printf("Digite um número inteiro:");
    scanf("%hu", &num);
    printf("%hu", soma1SePar(num));
}