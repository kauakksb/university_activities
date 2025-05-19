#include <stdio.h>

void main()
{
    int tamanho;
    scanf("%d", tamanho);
    int vetor[tamanho], vetorInverso[tamanho];
    int leitura;
    
    for(int i = 0; i < tamanho; i++)
    {
        scanf("%d", &leitura);
        vetor[i] = leitura;
    }

    for(int i = 0; i < tamanho; i++)
    {
        vetorInverso[i] = vetor[(tamanho-1)-i];
    }

    for(int i = 0; i < tamanho; i++)
    {
        printf("%d ", vetorInverso[i]);
    }
    printf("\n");
}