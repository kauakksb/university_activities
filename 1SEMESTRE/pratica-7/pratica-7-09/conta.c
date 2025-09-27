#include <stdio.h>
#include <stdlib.h>

int random(int n)
{
    return rand() % n;
}

int randInt(int min, int max)
{
    return min + (rand() % (max - min));
}

void preencherpseudoaleatoriamente(int semente, int min, int max, int linhas, int colunas, int matriz[linhas][colunas])
{
    srand(semente);

    for(int i = 0; i < linhas; i++)
    {
        for(int j = 0; j < colunas; j++)
        {
            matriz[i][j] = randInt(min, max);
        }
    }

    for(int i = 0; i < linhas; i++)
    {
        for(int j = 0; j < colunas; j++)
        {
            printf("%d ", matriz[i][j]);
        }
    }
}