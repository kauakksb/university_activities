#include <stdio.h>

typedef struct ponto
{
    float x;
    float y;
}ponto;

typedef struct retangulo
{
    ponto ponto1;
    ponto ponto2;
}retangulo;

int main()
{
    float pontoX, pontoY;
    retangulo retangulo1;

    scanf("%f", &retangulo1.ponto1.x);
    scanf("%f", &retangulo1.ponto1.y);

    while(1)
    {
        scanf("%f", &retangulo1.ponto2.x);
        scanf("%f", &retangulo1.ponto2.y);
        if(retangulo1.ponto1.x >= retangulo1.ponto2.x || retangulo1.ponto1.y <= retangulo1.ponto2.y)
        {
            printf("Coordenada invalida\n");
        }else{break;}
    }

    scanf("%f", &pontoX);
    scanf("%f", &pontoY);

    if(pontoX > retangulo1.ponto2.x || pontoX < retangulo1.ponto1.x)
    {
        printf("O ponto nao pertence ao retangulo");
        return 0;
    }

    if(pontoY > retangulo1.ponto1.y || pontoY < retangulo1.ponto2.y)
    {
        printf("O ponto nao pertence ao retangulo");
        return 0; 
    }

    printf("O ponto pertence ao retangulo");
    return 0;
}