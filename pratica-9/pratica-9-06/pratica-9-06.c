#include <stdio.h>
#include <string.h>

#define TAMMAX 100

int main()
{
    FILE *arq = fopen("case.txt", "r");
    char *nomes[TAMMAX][TAMMAX];
    char copia[TAMMAX];
    int i = 0, fim;

    while (!feof(arq))
    {
        fgets(nomes[i], TAMMAX, arq);
        if(nomes[i][strlen(nomes[i])-1] == '\n')
        {
            nomes[i][strlen(nomes[i])-1] == '\0';
        }
        i++;
    }
    fim = i + 1;

    for(int j = 0; j < fim; j++)
    {
        for(int k = 1; k < fim; k++)
        {
            if(nomes[k][0] < nomes[k-1][0])
            {
                strcpy(copia, nomes[k-1]);
                strcpy(nomes[k-1], nomes[k]);
                strcpy(nomes[k], copia);
            }
        }
    }

    for(int j = 0; j < fim; j++)
    {
        printf("%s\n", nomes[j]);
    }

    fclose(arq);
    return 0;
}