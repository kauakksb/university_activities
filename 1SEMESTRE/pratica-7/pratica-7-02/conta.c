#include <stdio.h>

float calculamedia(int tamanho, float vetor[])
{
    float media = 0;

    for(int i = 0; i < tamanho; i++)
    {
        media += vetor[i];
    }

    media = media/tamanho;

    return media;
}