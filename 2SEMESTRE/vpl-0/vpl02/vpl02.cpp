#include <iostream>
#include <iomanip>
#include <math.h>

float media_aritmetica(int n, float * numeros)
{
    float media = 0;

    for(int i = 0; i < n; i++)
    {
        media += numeros[i];
    }
    media = media/n;

    return media;
}

float desvio_padrao(int n, float * numeros, float media)
{
    float desvio = 0;
    for(int i = 0; i < n; i++)
    {
        desvio += ((numeros[i] - media) * (numeros[i] - media));
    }
    desvio = desvio / n;
    desvio = sqrt(desvio);
    return desvio;
}

int main()
{
    int n;
    float *numeros, media, desvio;

    std::cin >> n;
    numeros = new float[n];

    for(int i = 0; i < n; i++)
    {
        std::cin >> numeros[i];
    }
    media = media_aritmetica(n, numeros);
    desvio = desvio_padrao(n, numeros, media);

    std::cout << std::fixed << std::setprecision(4);
    std::cout << media << std::endl;
    std::cout << desvio;

    delete[] numeros;
}