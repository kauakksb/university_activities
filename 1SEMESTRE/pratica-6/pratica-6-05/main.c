#include <stdio.h>
#include <string.h>

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
    char frase1[50], frase2[50], resultado;
    int verificador = 0;

    fgets(frase1, 51, stdin);
    fgets(frase2, 51, stdin);
    
    

    for(int i = 0; i < contaCaracteres(frase1); i ++)
    {
        verificador = 0;
        for(int j = 0; i < contaCaracteres(frase2); i++)
        {
            
            if (frase1[j] == frase2[j])
            {
                verificador++;
            }
        }
        if(verificador == contaCaracteres(frase2)){
            strcpy(resultado, "E substring");
            break;
        }else{
            strcpy(resultado, "Nao e substring");
        }
    }
    printf("%s", resultado);

    return 0;
}