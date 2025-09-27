#include <stdio.h>
#include "minhas_funcoes.h"

void testaSoma1(int num)
{
    int x = num;
    int *func_end_num = &x;
    soma1(func_end_num);
}

void main()
{
    int num;
    printf("Digite um numero inteiro:\n");
    scanf("%d", &num);
    testeSoma1(num);
}
