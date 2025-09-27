#include <stdio.h>

void main()
{
    int tamanhoA, tamanhoB, tamanhoC;
    scanf("%d", &tamanhoA);
    int vetorA[tamanhoA];

    for (int i = 0; i < tamanhoA; i++)
    {
        scanf("%d", &vetorA[i]);
    }

    scanf("%d", &tamanhoB);
    int vetorB[tamanhoB];

    for (int i = 0; i < tamanhoB; i++)
    {
        scanf("%d", &vetorB[i]);
    }

    for (int i = 0; i < tamanhoA; i++)
    {
        for (int j = 0; j < tamanhoB; j++)
        {
            if(vetorA[i] == vetorB[j])
            {
                tamanhoC++;
            }
        }
    }

    int vetorC[tamanhoC];
    int posicao = 0;

    
    for (int i = 0; i < tamanhoA; i++)
    {
        for (int j = 0; j < tamanhoB; j++)
        {
            if(vetorA[i] == vetorB[j])
            {
                vetorC[posicao] = vetorA[i];
                posicao++; 
            }
        }
    }

    for (int i = 0; i < tamanhoC; i++)
    {
        printf("%d\n", vetorC[i]);
    }

}