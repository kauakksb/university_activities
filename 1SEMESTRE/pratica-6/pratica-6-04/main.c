#include <stdio.h>

int contaCaracteres(char frase[])
{
    int i = 1;
    
    while (frase[i] != '\0')
    {
        i++;
    }
    
    return i;
}

int main()
{
    char frase[50], novaFrase[50];
    int tamanho;
    fgets(frase, 51, stdin);
    
    tamanho = contaCaracteres(frase);

    for(int i = 0; i < tamanho; i++)
    {
        novaFrase[tamanho] = frase[i];
        tamanho--;   
    }

    printf("%s", novaFrase);

    return 0;
}

#include <stdio.h>

int contaCaracteres(char frase[])
{
    int i = 0;
    
    while (frase[i+1] != '\0')
    {
        i++;
    }
    
    return i -1;
}

int main()
{
    char frase[50], novaFrase[50];
    int tamanho, i = 0;
    fgets(frase, 51, stdin);
    
    tamanho = contaCaracteres(frase);
    
    while (i <= contaCaracteres(frase))
    {
        novaFrase[i] = frase[tamanho];
        tamanho--;
        i++;
    }

    novaFrase[i] = '\0';
    printf("%s", novaFrase);

    return 0;
}