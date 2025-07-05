#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "address.h"

struct user {
    char *name;
    int idade;
    struct address *addr;
};

char ** separa_string(const char * string, char *delim)
{
    char ** str;
    int separacoes = 0;
    int m = 0, n = 0;

    for(int i = 0; i < strlen(delim); i++)
    {
        while(string[m] != '\0')
        {
            if(string[m] == delim[i])separacoes++;
            m++;
        }
    }
    separacoes++;

    str = (char**) malloc((separacoes+1) * sizeof(char*));
    m = 0;

    for(int j = 0; j < separacoes; j++)
    {

        if (j < separacoes-1)
        {
            for(int i = 0; i < strlen(delim); i++)
            {
                while(string[m] != delim[i])m++;
            }
        }else if(j == separacoes-1)
        {
            while(string[m] != '\0'){
                m++;
            }
        }
        n = m - n;
        str[j] = (char*)malloc((n+1)* sizeof(char));

        for(int i = 0; i < n; i++)
        {
            str[j][i] = string[(m-n)+i];
        }
        str[j][n] = '\0';
        m++;
        n = m;
    }

    str[separacoes] = NULL;

    return str;
}

void free_string(char ** str, int n)
{
    for(int i = 0; i < n; i++)
    {
        free(str[i]);
    }
    free(str);
}

int tamanho_vetor_string(char ** str)
{
    int i = 0;
    while(str[i] != NULL){
        i++;
    }
    return i-1;
}

struct user * create_user(const char * input)
{
    char ** str_user;
    char **str_addr;
    struct user *usuario;

    usuario = (struct user*) malloc(sizeof(struct user));
    str_user = separa_string(input, "#");
    str_addr = separa_string(str_user[2], "|");

    usuario->name = (char*) malloc(strlen(str_user[0]) * sizeof(char));
    strcpy(usuario->name, str_user[0]);
    usuario->idade = atoi(str_user[1]);
    usuario->addr = create_address(str_user[2]);

    free_string(str_user, tamanho_vetor_string(str_user));
    free_string(str_addr, tamanho_vetor_string(str_addr));

    return usuario;
}

void free_user(struct user * user)
{
    free_address(user->addr);
    free(user->name);
    free(user);
}

int main()
{
    char str[] = "Joao Silva#25#Avenida Paulista|1000|01311";
    char ** v;
    int tamanhoVetor;
    struct user *usuario1;

    usuario1 = create_user(str);

    printf("Nome: %s\n", usuario1->name);
    printf("Idade: %d\n", usuario1->idade);
    printf("Rua: %s\n", usuario1->addr->line);
    printf("Numero: %d\n", usuario1->addr->number);
    printf("CEP: %d", usuario1->addr->zipcode);

    free_user(usuario1);

    return 0;
}