#include <stdio.h>
#include <string.h>

#define TAMMAX 100

typedef struct pessoa
{
   char nome[TAMMAX];
   int idade;
}pessoa;

int main()
{
    FILE * arq = fopen("case.txt", "r");
    pessoa mais_velha;
    pessoa mais_nova;
    char nome[TAMMAX];
    int idade;

    fgets(nome, TAMMAX, arq);
    fscanf(arq, "%d", &idade);

    strcpy(mais_velha.nome, nome);
    mais_velha.idade = idade;

    strcpy(mais_nova.nome, nome);
    mais_nova.idade = idade;

    while(!feof(arq))
    {
        fgets(nome, TAMMAX, arq);
        fscanf(arq, "%d", &idade);

        if(idade > mais_velha.idade)
        {
            strcpy(mais_velha.nome, nome);
            mais_velha.idade = idade;

        }else if(idade < mais_nova.idade)
        {
            strcpy(mais_nova.nome, nome);
            mais_nova.idade = idade;
        }
    }

    printf("%s", mais_nova.nome);
    printf("%s", mais_velha.nome);

    fclose(arq);
    return 0;
}