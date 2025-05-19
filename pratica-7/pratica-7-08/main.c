#include <stdio.h>

void main()
{

    int linhas, colunas;

    scanf("%d", &linhas);
    scanf("%d", &colunas);

    int matriz[linhas][colunas];

    for(int i = 0; i < linhas; i++)
    {
        for(int j = 0; j < colunas; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
    
    int vez = 0;
    int m = 0, n = 0;
    char direcao = 'D';
    
    int entradas = linhas * colunas;

    printf("Entradas: %d\n", entradas);
    printf("Linhas: %d\n", linhas);
    printf("Colunas: %d\n", colunas);
    printf("Vez: %d\n\n", vez);
    int inicioLinha = 0;
    int fimLinha = colunas;
    int inicioColuna = 0;
    int fimColuna = linhas;

    while(vez < entradas)
    {
        int i = 0, j = 0;
        printf("Direcao: %c\n", direcao);
        printf("Pre-loop-inicioLinha: %d\n", inicioLinha);
        printf("Pre-loop-inicioColuna: %d\n", inicioColuna);
        printf("Pre-loop-fimLinha: %d\n", fimLinha);
        printf("Pre-loop-fimColuna: %d\n", fimColuna);
        printf("Pre-loop-M: %d\n", m);
        printf("Pre-loop-N: %d\n", n);
        printf("Pre-loop-Vez: %d\n\n", vez);
        if(direcao == 'D')
        {
            while(n != fimLinha && vez < entradas)
            {
                if(vez > 0 )
                {
                    n++;
                }
                if(n == fimLinha)break;
                printf("Elemento M: %d N: %d Valor: %d\n",m, n, matriz[m][n]);
                vez++;
                
                printf("Vez: %d\n", vez);
                printf("M: %d\n", m);
                printf("N: %d\n\n", n);
            }
            fimLinha--;
            direcao = 'B';
            n--;

        }else if(direcao == 'B')
        {
            while (m != fimColuna && vez < entradas)
            {
                m++;
                if(m == fimColuna)break;
                
                printf("Elemento M: %d N: %d Valor: %d\n",m, n, matriz[m][n]);
                vez++;
                i++;
                
                printf("Vez: %d\n", vez);
                printf("M: %d\n", m);
                printf("N: %d\n\n", n);
            }
            fimColuna--;
            direcao = 'E';
            m--;
            

        }else if(direcao == 'E')
        {
            while (n != inicioLinha && vez < entradas)
            {
                n--;
                printf("Elemento M: %d N: %d Valor: %d\n",m, n, matriz[m][n]);
                
                vez++;
                j++;
                
                printf("Vez: %d\n", vez);
                printf("M: %d\n", m);
                printf("N: %d\n\n", n);
            }
            inicioLinha++;
            direcao = 'C';

            
        }else if(direcao == 'C')
        {
            while (m != inicioColuna && vez < entradas)
            {
                m--;
                if(m == inicioColuna)break;
                printf("Elemento M: %d N: %d Valor: %d\n",m, n, matriz[m][n]);
                vez++;
                i++;
                
                printf("Vez: %d\n", vez);
                printf("M: %d\n", m);
                printf("N: %d\n", n);
            }
            inicioColuna++;
            direcao = 'D';
            m++;
            printf("Valor M fim-cima: %d\n\n", m);
        }
    }
    printf("Direcao: %c\n", direcao);
    printf("Valor final inicioLinha: %d\n", inicioLinha);
    printf("Valor final inicioColuna: %d\n", inicioColuna);
    printf("Valor final fimLinha: %d\n", fimLinha);
    printf("Valor final fimColuna: %d\n", fimColuna);
    printf("Valor final M: %d\n", m);
    printf("Valor final N: %d\n", n);
    printf("Valor final Vez: %d\n\n", vez);
}