#include <stdio.h>

void main()
{
    int linhas, colunas;

    scanf("%d", &linhas);
    scanf("%d", &colunas);

    int matriz[linhas][colunas];
    int matrizOposta[linhas][colunas];

    for(int i = 0; i < linhas; i++)
    {
        for(int j = 0; j < colunas; j++)
        {
            scanf("%d", &matriz[i][j]);
            matrizOposta[i][j] = matriz[i][j] * (-1);
        }
    }

    for(int i = 0; i < linhas; i++)
    {
        for(int j = 0; j < colunas; j++)
        {
            printf("%d ", matrizOposta[i][j]);
        }
        printf("\n");
    }
}