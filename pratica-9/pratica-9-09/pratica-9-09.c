#include <stdio.h>
#include <stdlib.h>

#define TAMMAX 100

typedef struct aluno
{
    char nome[20];
    int nota1;
    int nota2;
    int nota3;
    int nota4;
}aluno;

int main()
{
    FILE *arq = fopen("notas.txt", "r");
    char linha[TAMMAX];
    char caractere;
    int m = 0, i = 0;
    float media = 0;

    aluno *alunos;

    while(!feof(arq))
    {
        fscanf(arq,"%c", &caractere);
        if(caractere == '\n')m++;
    }
    alunos = (aluno*)malloc(m*sizeof(aluno));

    fclose(arq);
    arq = fopen("notas.txt", "r");

    while(!feof(arq))
    {
        int j = 0;
        while(1)
        {
            fscanf(arq, "%c", &caractere);
            if(caractere == ' ' || caractere == '\n')
            {
                alunos[i].nome[j] = '\0';
                break;
            }
            alunos[i].nome[j] = caractere;
            j++;
        }
        fscanf(arq,"%d", &alunos[i].nota1);
        fscanf(arq,"%d", &alunos[i].nota2);
        fscanf(arq,"%d", &alunos[i].nota3);
        fscanf(arq,"%d", &alunos[i].nota4);
        getchar();
        
        media = (float)(alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3 + alunos[i].nota4)/ 4;
        
        if(media >= 60)
        {
            printf("Nome: %s - Média: %.2f\n", alunos[i].nome, media);
        }
        i++;
    }

    fclose(arq);
    return 0;
}
