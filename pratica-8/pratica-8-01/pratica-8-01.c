#include <stdio.h>
#include <math.h>

float potencia(float num, int expoente)
{
    if(expoente < 0)
    {
        num = 1/num;
        
    }else if(expoente == 0)
    {
        return 1;
    }
    
    for(int i = 0; i < expoente; i++)
    {
        num = num * num;
    }
    
    return num;
}

double dist(float x1, float x2, float y1, float y2)
{
    return sqrt(potencia(x1 - x2, 2) + potencia(y1 - y2, 2));
}

int main()
{
    typedef struct coordenada
    {
        float x;
        float y;
    } coordenada;

    coordenada ponto1;
    coordenada ponto2;

    scanf("%f", &ponto1.x);
    scanf("%f", &ponto1.y);
    
    scanf("%f", &ponto2.x);
    scanf("%f", &ponto2.y);

    printf("%.2lf", dist(ponto1.x, ponto2.x, ponto1.y, ponto2.y));
    return 0;
}