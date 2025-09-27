#include <stdio.h>
#include <string.h>

int contaocorrencias(char frase[],int tamanho, char letra)
{
    int ocorrencias = 0;
    for (int i = 0; i < tamanho; i++)
    {
        if (frase[i] == letra)
        {
            ocorrencias++;
        }
    }

    return ocorrencias;
}