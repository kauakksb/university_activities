#include <stdio.h>
#include <stdlib.h>

void main()
{
    float saldo = 789.54, juros = 0.0056;

    saldo += saldo * juros;
    saldo += 303.20;
    saldo += saldo * juros;
    saldo -= 58.25;
    saldo += saldo * juros;
    
    printf("%.2f", saldo);
}