#include <stdio.h>

unsigned long long int fast_pow_2(int expoente)
{   
    return (unsigned long long)2 << (expoente-1);
}

void main()
{
    int num;
    printf("Digite um número inteiro:\n");
    scanf("%d", &num);
    printf("%llu", fast_pow_2(num));
}