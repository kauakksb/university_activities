#include <string.h>

void concatena(char fraseA[], int tamanhoA, char fraseB[], int tamanhoB, char fraseC[])
{
    for(int i = 0; i < tamanhoA; i++)
    {
        fraseC[i] = fraseA[i];
    }

    for (int i = 0; i < tamanhoB; i++)
    {
        fraseC[i+tamanhoA] = fraseB[i];
    }
    
}