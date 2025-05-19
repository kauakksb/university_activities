#include <stdio.h>

void removechar(char frase[], int tamanho, char letra)
{

    for(int i = 0; i < tamanho; i++)
    {
        if (frase[i] == letra)
        {
            for(int j = i; j < tamanho; j++)
            {
                frase[j] = frase[j+1];
            }
            break;
        }
    }

}