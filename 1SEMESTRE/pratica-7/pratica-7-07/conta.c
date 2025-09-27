#include <stdio.h>

int verificamatrizigual(
    int numLinhasA, int numColunasA, int matrizA[numLinhasA][numColunasA], 
    int numLinhasB, int numColunasB, int matrizB[numLinhasB][numColunasB])
{
    if(numLinhasA != numLinhasB || numColunasA != numColunasB)
    {
        return 0;
    }

    for(int i = 0; i < numLinhasA; i++)
    {
        for(int j = 0; j < numColunasB; j++)
        {
            if(matrizA[i][j] != matrizB[i][j])
            {
                return 0;
            }
        }
    }

    return 1;
}