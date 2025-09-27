#include <stdio.h>

int is_alphanum(char letra)
{
    if((letra > 64 && letra < 91) || (letra > 96 && letra < 123) || (letra > 47 && letra < 58))
    {
        return 1;
    }
    return 0;
}

int main()
{
    char frase[50];
    int quant_palavras = 0;

    fgets(frase, 51, stdin);
    int i;

    for(i = 0; i < 50; i++)
    {
        if (frase[i] == '\0')break;
        if(is_alphanum(frase[i]) && (frase[i+1] == ' ' || frase[i+1] == '\n' || frase[i+1] == '\0'))
        {
            quant_palavras++;
        }
    }
    
    printf("%d", quant_palavras);
    
    return 0;
}