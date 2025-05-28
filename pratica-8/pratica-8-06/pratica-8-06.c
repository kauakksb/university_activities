#include <stdio.h>
#include <string.h>

#define NUM_ATLETAS 5

struct atleta
{
    char nome[10];
    char esporte[10];
    int idade;
    float altura;
};

void read_atletas(struct atleta *v, int n)
{
    char leitura[25];

    for(int i = 0; i < n; i++)
    {
        scanf("%9s", v[i].nome);
        scanf("%9s", v[i].esporte);
        scanf("%d", &v[i].idade);
        scanf("%f", &v[i].altura);
    }
}

int compare_idade(struct atleta a1, struct atleta a2)
{
    if(a1.idade > a2.idade)
    {
        return 1;

    }else if(a1.idade == a2.idade)
    {
        return 0;
    }
    return -1;
}

int main()
{
    struct atleta v[NUM_ATLETAS];
    struct atleta v2[NUM_ATLETAS];
    struct atleta novo_atleta;
    read_atletas(v, NUM_ATLETAS);

    for(int i = 0; i < NUM_ATLETAS; i++)
    {
        for(int j = 1; j < NUM_ATLETAS; j++)
        {
            if(compare_idade(v[j], v[j-1]) == 1)
            {
                novo_atleta = v[j-1];
                v[j-1] = v[j];
                v[j] = novo_atleta;
            }
        }
    }

    for(int i = 0; i < NUM_ATLETAS; i++)
    {
        printf("%d - %s\n", i+1, v[i].nome);
    }

}