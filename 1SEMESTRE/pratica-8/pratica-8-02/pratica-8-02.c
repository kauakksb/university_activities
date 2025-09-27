#include <stdio.h>
#include <math.h>

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
    int errado = 1;
    float perimetro, area;
    double diagonal;
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

    perimetro = (retangulo1.ponto2.x - retangulo1.ponto1.x)* 2 + (retangulo1.ponto1.y - retangulo1.ponto2.y) * 2;
    area = (retangulo1.ponto2.x - retangulo1.ponto1.x) * (retangulo1.ponto1.y - retangulo1.ponto2.y);
    diagonal = sqrt(pow(retangulo1.ponto1.x - retangulo1.ponto2.x, 2) + pow(retangulo1.ponto1.y - retangulo1.ponto2.y, 2));

    printf("Area = %.2f\n", area);
    printf("Perimetro = %.2f\n", perimetro);
    printf("Diagonal = %.2lf", diagonal);

    return 0;
}