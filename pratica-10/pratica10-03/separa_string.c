#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char ** separa_string(char * string, char *delim)
{
    char ** str;
    int separacoes = 0;
    int m = 0, n = 0;

    printf("%c\n", delim[0]);
    system("PAUSE");
    printf("print inicial: %s\n", string);

    for(int i = 0; i < strlen(delim); i++)
    {
        while(string[m] != '\0')
        {
            if(string[m] == delim[i])separacoes++;
            m++;
        }
    }
    separacoes++;
    printf("separacoes: %d\n", separacoes);
    system("PAUSE");

    str = (char**) malloc(separacoes * sizeof(char*));
    m = 0;

    for(int j = 0; j < separacoes; j++)
    {

        if (j < separacoes-1)
        {
            for(int i = 0; i < strlen(delim); i++)
            {
                while(string[m] != delim[i])m++;printf("LETRA: %c\n", string[m]);printf("m: %d\n", m);
                system("PAUSE");
            }
        }else if(j == separacoes-1)
        {
            while(string[m] != '\0'){
                m++;
                printf("LETRA: %c\n", string[m]);
                printf("m: %d\n", m);
            }
            system("PAUSE");
        }
        n = m - n;
        printf("N: %d", n);
        system("PAUSE");
        str[j] = (char*)malloc(n* sizeof(char));

        for(int i = 0; i < n; i++)
        {
            str[j][i] = string[(m-n)+i];
            printf("LETRA GUARDADA: %c\n", str[j][i]);
            system("PAUSE");
        }
        str[j][n] = '\0';
        m++;
        n = m;
        printf("LETRA: %c\n", string[m]);
        printf("m: %d\n", m);
    }

    return str;
}