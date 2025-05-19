#include  <stdio.h>

int parOuImpar(unsigned int number)
{
    return (number + 1) & 1; 
}

void main()
{
    unsigned int num;
    printf("Digite um número inteiro:");
    scanf("%hu", &num);
    printf("%d", parOuImpar(num));
}