#include <stdio.h>
#include <math.h>

void main()
{
    long long int inteiro_longo_menor = 0;
    unsigned long long int inteiro_longo_sem_sinal = 0;
    int i;
    long long int h;
    int g;

    inteiro_longo_menor = inteiro_longo_menor + pow(2,63);
    inteiro_longo_menor *= -1;
    inteiro_longo_sem_sinal += pow(2,64);
    inteiro_longo_sem_sinal -= 1;
     
    printf("menor:%lld\n", inteiro_longo_menor);
    printf("maior:%llu\n", inteiro_longo_sem_sinal);
}