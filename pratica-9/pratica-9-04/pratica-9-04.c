#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMMAX 100

int main()
{
    FILE * arq = fopen("case.txt", "r");

    char linha[TAMMAX];
    int num;
    int soma = 0, primos = 0;
    int soma_pares = 0, num_pares = 0;
    int maior = 0, menor;

    while (!feof(arq))
    {
        fgets(linha, TAMMAX, arq);
        num = atoi(linha);
        soma += num;

        if(num % 2 == 0)
        {
            soma_pares += num;
            num_pares++;
        }

        int j = 0;
        for(int i = 1; i <= num; i++)
        {
            if(num % i == 0)j++;
        }

        if(j == 2)primos++;

        if(num > maior)
        {
            maior = num;
        }

        if(soma == num)
        {
            menor = num;
        }else if(num < menor)
        {
            menor = num;
        }
    }
    
    printf("A soma é: %d\n", soma);
    printf("O maior número é: %d\n", maior);
    printf("O menor número é: %d\n", menor);
    printf("A média dos pares é: %.2f\n", (float)soma_pares/num_pares);
    printf("O número de primos é: %d", primos);

    fclose(arq);
    return 0;
}