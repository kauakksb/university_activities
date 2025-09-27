#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TAMMAX 100

typedef struct
{
    int dia;
    int mes;
    int ano;
}data;

int mais_recente(data d1, data d2)
{
    if(d1.ano > d2.ano)
    {
        return 1;

    }else if(d1.ano < d2.ano)
    {
        return -1;

    }else if(d1.ano == d2.ano)
    {
        if(d1.mes > d2.mes)
        {
            return 1;

        }else if (d1.mes < d2.mes)
        {
            return -1;

        }else if(d1.mes == d2.mes)
        {
            if (d1.dia > d2.dia)
            {
                return 1;

            }else if(d1.dia < d2.dia)
            {
                return -1;

            }else{return 0;}
        }
    }
}

int main()
{
    FILE * arq = fopen("datas.txt", "r");
    char linha[TAMMAX];
    char caractere;
    int m = 0, i = 0;

    data * datas;
    data data_mais_recente;

    while(!feof(arq))
    {
        fscanf(arq, "%c", &caractere);
        if(caractere == '\n')m++;
    }

    datas = (data*)malloc(m * sizeof(data));

    fclose(arq);
    arq = fopen("datas.txt", "r");
    
    while(fgets(linha, TAMMAX, arq) != NULL)
    {
        sscanf(linha, "%d/%d/%d", &datas[i].dia, &datas[i].mes, &datas[i].ano);
        i++;
    }

    data_mais_recente.dia = datas[0].dia;
    data_mais_recente.mes = datas[0].mes;
    data_mais_recente.ano = datas[0].ano;

    for(int j = 0; j < m; j++)
    {
        if(mais_recente(datas[j], data_mais_recente) == 1)
        {
            data_mais_recente.dia = datas[j].dia;
            data_mais_recente.mes = datas[j].mes;
            data_mais_recente.ano = datas[j].ano;
        }
    }

    if(data_mais_recente.dia < 10){
        if(data_mais_recente.mes < 10){
            printf("0%d/0%d/%4d", data_mais_recente.dia, data_mais_recente.mes, data_mais_recente.ano);
        }
    }else if(data_mais_recente.mes < 10){
        printf("%d/0%d/%4d", data_mais_recente.dia, data_mais_recente.mes, data_mais_recente.ano);
        
    }else{
        printf("%d/%d/%4d", data_mais_recente.dia, data_mais_recente.mes, data_mais_recente.ano);
    }
    
    fclose(arq);
    return 0;
}