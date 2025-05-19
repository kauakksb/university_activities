#include <stdio.h>

void main()
{
    int tamanho;
    int novo_valor;

    scanf("%d", &tamanho);

    int vetor[tamanho];

    for(int i = 0; i < tamanho; i++)
    {
        scanf("%d", &vetor[i]);
    }

    for(int i = 1; i < tamanho; i++)
    {
        for(int j = 0; j < tamanho; j++)
        {
            if(vetor[j] > vetor[j-1])
            {
                novo_valor = vetor[j];
                vetor[j] = vetor[j-1];
                vetor[j-1] = novo_valor;
            }
        }
        
    }

    for(int i = 0; i < tamanho; i++)
    {
        if(i == tamanho-1)
        {
            printf("%d", vetor[i]);
            break;
        }
        printf("%d ", vetor[i]);
    }

}