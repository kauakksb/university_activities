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

int getNum(char caractere)
{
    printf("ascii: %d\n", caractere);
    printf("caractere: %c\n", caractere);
    int num, asc[10] = {48, 49, 50, 51, 52, 53, 54, 55, 56, 57};
    for(int i = 0; i < 10; i++)
    {
        if(caractere == asc[i])
        {
            printf("%d\n", i);
            num = i;
            break;
        }else{
            num = -1;
        }
    }
    return num;
}

void read_atletas(struct atleta *v, int n)
{
    char leitura[25];

    for(int i = 0; i < n; i++)
    {
        scanf("%9s", v[i].nome);
        scanf("%9s", v[i].esporte);
        scanf("%d", &v[i].idade);
        scanf("%f", &v[i].altura);

        printf("nome: %s\n", v[i].nome);
        printf("esporte: %s\n", v[i].esporte);
        printf("idade: %d\n", v[i].idade);
        printf("altura: %f\n", v[i].altura);
    }
}  

int compare_altura(struct atleta a1, struct atleta a2)
{
    printf("a1: %.2f a2: %.2f\n", a1.altura, a2.altura);
    if(a1.altura > a2.altura)
    {
        printf("maior\n");
        return 1;

    }else if(a1.altura == a2.altura)
    {
        printf("Mesma altura\n");
        return 0;
    }
    printf("Menor\n");
    return -1;
}

struct atleta higher_atlete(struct atleta *v, int n)
{
    struct atleta higher;
    higher.altura = 0;

    for(int i = 0; i < n; i++)
    {
        if(compare_altura(v[i], higher) == 1)
        {
            strcpy(higher.nome, v[i].nome);
            higher.altura = v[i].altura;

        }else if(compare_altura(v[i], higher) == 0)
        {
            strcpy(higher.nome, v[i].nome);
            higher.altura = v[i].altura;
        }
    }
    printf("mais alto: %s\n", higher.nome);
    return higher;
}

int compare_idade(struct atleta a1, struct atleta a2)
{
    printf("a1: %d a2: %d\n", a1.idade, a2.idade);
    if(a1.idade > a2.idade)
    {
        printf("mais velho\n");
        return 1;

    }else if(a1.idade == a2.idade)
    {
        printf("mesma idade\n");
        return 0;
    }
    printf("mais novo\n");
    return -1;
}

struct atleta older_atlete(struct atleta *v, int n)
{
    struct atleta older;
    older.idade = 0;

    for(int i = 0; i < n; i++)
    {
        if(compare_idade(v[i], older) == 1)
        {
            strcpy(older.nome, v[i].nome);
            older.idade = v[i].idade;

        }
        printf("mais velho: %s", older.nome);
        printf("idade: %d", older.idade);
    }
    printf("mais velho: %s", older.nome);
    return older;
}

int main()
{
    struct atleta v[NUM_ATLETAS];
    read_atletas(v, NUM_ATLETAS);

    for(int i = 0; i < NUM_ATLETAS; i++)
    {
        printf("Nome: %s \nEsporte: %s \nIdade: %d \nAltura: %f\n", v[i].nome, v[i].esporte, v[i].idade, v[i].altura);
    }

    struct atleta mais_alto = higher_atlete(v, NUM_ATLETAS);
    struct atleta mais_velho = older_atlete(v, NUM_ATLETAS);

    printf("Mais alto: %s\n", mais_alto.nome);
    printf("Mais velho: %s\n", mais_velho.nome);

}