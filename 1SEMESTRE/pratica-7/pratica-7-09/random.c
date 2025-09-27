#include <stdio.h>
#include <stdlib.h>

// Retorna um número aleatório entre 0 e n-1
int random(int n)
{
    return rand() % n;
}

// Retorna um número inteiro aleatório entre min e max
int randInt(int min, int max)
{
    return min + random(max - min + 1);
}

// Retorna um número aleatório entre 0 e 1
float randf()
{
    return (float)rand()/ RAND_MAX;
}

// Retorna um número ponto flutuante aleatório entre max e min
float randFloat(float min, float max)
{
    return min + randf() * (max - min);
}