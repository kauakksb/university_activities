#include <stdio.h>

void soma(int *num)
{
    int soma;
    soma = *num + 1;
    printf("Resultado: %d", soma);
}

void main()
{
    int x;
    int *y;
    printf("Digite um número:\n");
    scanf("%d", &x);
    y = &x;
    soma(y);
}