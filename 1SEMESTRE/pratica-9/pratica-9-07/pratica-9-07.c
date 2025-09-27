#include <stdio.h>
#include <string.h>

#define TAMAMX 100

int main()
{
    FILE * arq = fopen("texto.txt", "r");
    char leitura[TAMAMX];
    char *palavra;
    int n;

    if (arq == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    scanf("%d", &n);
    
    while (fgets(leitura, TAMAMX, arq) != NULL)
    {
        if(leitura[strlen(leitura)-1] == '\n' || leitura[strlen(leitura)-1] == '\r')
        {
            leitura[strlen(leitura)-1] = '\0';
        }
        if(leitura[strlen(leitura)-1] == '\r')
        {
            leitura[strlen(leitura)-1] = '\0';
        }
        palavra = strtok(leitura, " ");

        while (palavra != NULL)
        {
            if(strlen(palavra) >= n)
            {
                printf("%s\n", palavra);
            }
            palavra = strtok(NULL, " ");
        }
    }

    fclose(arq);
    return 0;
}