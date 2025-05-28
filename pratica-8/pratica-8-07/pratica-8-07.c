#include <stdio.h>

typedef struct data
{
    int dia;
    int mes;
    int ano;
}data;

struct evento
{
    char nome[20];
    char local[20];
    data data;
}evento;

void read_vector(struct evento *v, int n)
{
    char leitura;
    for(int i = 0; i < n; i++)
    {
        int j = 0;
        while(1)
        {
            scanf("%c", &leitura);
            v[i].nome[j] = leitura;
            if(leitura == '\n')
            {
                v[i].nome[j] = '\0';
                break;
            }
            j++;
        }

        j = 0;
        while(1)
        {
            scanf("%c", &leitura);
            v[i].local[j] = leitura;
            if(leitura == '\n')
            {
                v[i].local[j] = '\0';
                break;
            }
            j++;
        }
        scanf("%d", &v[i].data.dia);
        scanf("%d", &v[i].data.mes);
        scanf("%d", &v[i].data.ano);

        printf("%s\n", v[i].nome);
        printf("%s\n", v[i].local);
        printf("%d ", v[i].data.dia);
        printf("%d ", v[i].data.mes);
        printf("%d\n", v[i].data.ano);

    }

}

int main()
{
    int num_eventos, dia, mes, ano;
    scanf("%d", &num_eventos);

    struct evento eventos[num_eventos];

    read_vector(eventos, num_eventos);

    scanf("%d", &dia);
    scanf("%d", &mes);
    scanf("%d", &ano);

    int j = 0;

    for(int i = 0; i < num_eventos; i++)
    {
        
        if(dia == eventos[i].data.dia && mes == eventos[i].data.mes && ano == eventos[i].data.ano)
        {
            printf("%s", eventos[i].nome);
            printf("%s", eventos[i].local);
            j++;
        }
    }

    if(j == 0)
    {
        printf("Nenhum evento encontrado!");
    }

    return 0;
}